
#include <iostream>
#include <cctype>
#include <string>
 
int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Command-line Argument missing " << std::endl;
        return 0;
    }
    else if (argc == 2)
    {
        if (strcmp(argv[1], "toupper") == 0)
        {
            std::string str;
 
            std::cout << "Enter the string ";
            std::cin >> str;
            for (int i= 0; i < str.length(); i++)
            {
                str[i] = toupper(str[i]);
            }
            std::cout << "The string is now " << str
                      << std::endl;
        }
        else if (strcmp(argv[1], "tolower") == 0)
        {
            std::string str;
 
            std::cout << "Enter the string ";
            std::cin >> str;
            for (int i= 0; i < str.length(); i++)
                str[i] = tolower(str[i]);
            std::cout << "The string is now " << str
                      << std::endl;
        }
        else
            std::cout << "Unmatched second command-line argument"
                      << std::endl;   
    }
    return 0;       
}