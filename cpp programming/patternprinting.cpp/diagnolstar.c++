#include<iostream>
using namespace std;
int main()
{
    system("CLS");
    int i,j,row,space,k;
    space=1;
    cout<<"enter no. of row\n";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=space;k++)
        {
            cout<<" ";
        }
        space++;
        for(j=1;j<=2*(row-i)+1;j++)
        {
            if(j==1||j==2*(row-i)+1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<"\n";
    }
    space=row-1;
    for(i=1;i<=row-1;i++)
    {
        for(k=1;k<=space;k++)
        {
            cout<<" ";
        }
        space--;
        for(j=1;j<=2*(i+1)-1;j++)
        {
           if(j==1||j==2*(i+1)-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
    