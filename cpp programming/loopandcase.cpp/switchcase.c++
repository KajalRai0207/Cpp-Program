//#include <iostream>
//using namespace std;

//int main()
// {
//     cout<<"Enter any button\n";
//     int n ;
//     cin>>n;
//     if(n=='a')
//     {
//         cout<<"hello\n";
//     }
//     else if(n=='b')
//     {
//         cout<<"namaste\n";
//     }
//     else if(n=='c')
//     {
//         cout<<"ciao\n";
//     }
//     else
//     {
//         cout<<"i am still leaning\n";
//     }
//     return 0;
//  }
// #include <iostream>
// using namespace std;

// int main()
// {
//     system("CLS");
//     char n;
//     cout<<"enter any button\n";
//     cin>>n;
//     switch (n)
//     {
//         case 'a':
//             cout<<"hello\n";
//             break;
           
//         case 'b':
//             cout<<"namaste\n";
//              break;
            
//         case 'c':
//             cout<<"ciao\n";
//              break;
//         default:
//             cout<<"i am still learning\n";
//              break;
//     }
//         return 0;  
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     system("CLS");
//     double n1,n2;
//     char c;
//     cout<<"enter any operator\n";
//     cin>>c;
//     cout<<"enter any two numbers\n";
//     cin>>n1>>n2;
//     switch(c)
//     {
//              case '*':
//               cout<<n1<<"*"<<n2<<" = "<<n1*n2<<endl;
//               break;

//              case '/':
//               cout<<n1<<"/"<<n2<<" = "<<n1/n2<<endl;
//               break;

//              case '+':
//               cout<<n1<<"+"<<n2<<" = "<<n1+n2<<endl;
//               break;

//              case '-':
//               cout<<n1<<"-"<<n2<<" = "<<n1-n2<<endl;
//               break;

//              default:
//              cout<<"Not a suitable operator\n";
//              break;
//     }
//     return 0;  
// }
            
#include<iostream>
using namespace std;
int main()
{
   char a1;
   cout<<"enter any alphabet\n";
   cin>>a1;
   switch(a1)
   {
      case 'a':
         cout<<"it is a vowel\n";
         break;
      case 'e':
         cout<<"it is a vowel\n";
         break;
       case 'i':
           cout<<"it is a vowel\n";
           break;
       case 'o':
           cout<<"it is a vowel\n";
           break;
       case 'u':
           cout<<"it is a vowel\n";
           break;
       default:
           cout<<"it is a consonant\n";
           break;
    }
    return 0;
}
