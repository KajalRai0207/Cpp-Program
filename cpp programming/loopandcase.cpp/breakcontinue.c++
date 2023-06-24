/*#include<iostream>
using namespace std;

int main()
{
    int pocketmoney=3000;
    int days;
    for(days=1;days<=30;days++)
    {
        if(days%2==0)
        {
            continue;
        }
        if(pocketmoney==0)
        {
            break;
        }
        cout<<"go out today\n";
        pocketmoney=pocketmoney-300;
    }
    return 0;
}*/


#include<iostream>
using namespace std;

int main()
{
    system("CLS");
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
       
    }
    return 0;
}