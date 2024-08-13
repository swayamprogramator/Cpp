#include <iostream>
#include <ctime>
#include <iomanip>
 
std::string month[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
std::string day[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
 
int main()
{
    time_t timer;
    tm * time;
    const int BASE_YEAR = 1900;
 
    std::time(&timer);
    time = localtime(&timer);
    std::cout << "Current date " << day[time->tm_wday] << " "
              << month[time->tm_mon] << " " << time->tm_mday
              << " " << (time->tm_year + BASE_YEAR);
    std::cout << "\nCurrent time " << std::setw(2) << std::setfill('0')
              << time->tm_hour << " : " << std::setw(2) << std::setfill('0')
              << time->tm_min << 