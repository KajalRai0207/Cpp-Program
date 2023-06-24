#include<iostream>
using namespace std;
int factorial(int j)
{
    int fact=1;
    for (int i=1;i<=j;i++)
    {
        fact*=i;
    }
    return fact;
}
void pattern(int n)
{
    int calc=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            calc=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<calc<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    system("CLS");
    int n;
    cin>>n;
    cout<<"1"<<endl;
    pattern(n);
    return 0;
}