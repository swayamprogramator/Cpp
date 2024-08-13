sing namespace std;
 
void onescomp(int num)
{
    int rem;
 
    if (num <= 1)
    {
        cout << !num;
        return;
    }
    rem = num % 2;
    onescomp(num / 2);
    cout << !rem;
}
 
int main()
{
    int dec, bin;
    cout << "Enter the number : ";
    cin >> dec;
 
    if (dec < 0)
        cout << dec << " is not a positive integer." << endl;
    else
    {
        cout << "The ones complement form of " << dec << " is ";
        onescomp(dec);
        cout << endl;
    }
    return 0;
}