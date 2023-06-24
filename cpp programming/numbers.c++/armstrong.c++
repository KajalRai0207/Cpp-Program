//153 = 1^3 + 5^3 + 3^3 = 1+125+27 = 153
//use double while using pow to avoid error otherwise it may show error specially with 5
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    system("CLS");
    double sum=0;
    int n,num;
    cin>>n;
    num=n;
    while(n>0)
    {
        double rem=n%10;
        n=n/10;
        sum+=pow(rem,3);
    }
    if(sum==num)
    cout<<"armstrong no.";
    else
    {
        cout<<"not a armstrong no.";
    }
    return 0;
}