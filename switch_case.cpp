using namespace std;
 
int main()
{
    int percentage;
 
    cout << "Enter the percentage : ";
    cin >> percentage;
    switch (percentage / 10)
    {
    case 10:    case 9:
        cout << "You have got grade A+" << endl;
        break;
    case 8:
        cout << "You have got grade A" << endl;
        break;
    case 7:
        cout << "You have got grade B+" << endl;
        break;
    case 6:
        cout << "You have got grade B" << endl;
        break;
    case 5:
        cout << "You have got grade C" << endl;
        break;
    default:
        cout << "You have got grade D" << endl;
        break;
    }
}