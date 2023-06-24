#include<iostream>
using namespace std;
int main()
{
        char a1;
        char s;
        cout<<"enter any alphabet\n";
        cin>>a1;
        cout<<"enter yes or no\n";
        cin>>s;
        switch(s)
        {
             case 'y':
             cout<<"lets check\n";
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
             break;
            case 'n':
              cout<<"terminate\n";
              break;
            default:
              cout<<"wrong choice\n";
              break;
        }
             return 0;
}