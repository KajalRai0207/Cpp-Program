#include<iostream>
using namespace std;
void decimaltooctal(int n)
{
    int binaryNumber[100], num=n;
    int i = 0;
    while (n > 0) 
    {
        binaryNumber[i] = n % 8;
        n = n / 8;
        i++;
    }
    cout<<"Binary form of "<<num<<" is ";
    for (int j = i - 1; j >= 0; j--)
    cout << binaryNumber[j];
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    decimaltooctal(n);
}