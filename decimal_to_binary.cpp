sing namespace std;
 
void bin(int num)
{
    int rem;
 
    if (num <= 1)
    {
        cout << num;
        return;
    }
    rem = num % 2;
    onescomp(num / 2);
    cout << rem;
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
        cout << "The binary form of " << dec << " is ";
        bin(dec);
        cout << endl;
    }
    return 0;
}