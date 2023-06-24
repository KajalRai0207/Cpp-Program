#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row,space,l,h;
    cout<<"enter no. of row\n";
    cin>>row;
    space=row-1;
    h=row-1;
     for(i=1;i<=row;i++)
     {
        for(k=1;k<=space;k++)
        {
            cout<<" ";
        }
        space--;
        
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        for(l=1;l<=2*h-1;l++)
        {
            cout<<" ";
        }
        h--;
        if(i!=row)
        {
            for(j=1;j<=2*i-1;j++)
            {
                if(j==2*i-1||j==1)  
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                
            }
        }
        else
        for(j=1;j<=2*i-1;j++)
            {
                if(j==2*i-2)  
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                
            }
        cout<<"\n";
    }
    return 0;
}