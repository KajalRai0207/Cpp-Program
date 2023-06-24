//*
//**
//***
//****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             for (k=1;k<=3;k++)
//             {
//               cout<<" " ; 
//             }
//            cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

 //   *
 //  **
 // ***
 //****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,row,k,space;
//     cout<<"enter the no of row\n";
//     cin>>row;
//     space=row-1;
//     for(i=1;i<=row;i++)
//     {
//         for(k=1;k<=space;k++)
//         {
            
//            cout<<" ";
//         }
//         space--;
//         for(j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//   *
//  ***
// *****
//*******
 
 #include<iostream>
using namespace std;
int main()
{
    int i,j,row,k,space;
    cout<<"enter the no of row\n";
    cin>>row;
    space=row-1;
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=space;k++)
        {
            
           cout<<" ";
        }
        space--;
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    space=1;
    for(i=1;i<=row-1;i++)
    {
        for(k=1;k<=space;k++)
        {
            
           cout<<" ";
        }
        space++;
        for(j=1;j<=2*(row-i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}