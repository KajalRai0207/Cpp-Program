#include<iostream>
using namespace std;
int main()
{
    char a1;
    int a2;
    cout<<"enter a character\n";
    cin>>a1;
    cout<<"enter 0 or 1\n";
    cin>>a2;
    do
    {
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
        cin>>a1;
        cin>>a2;
    }
    while(a2==1);
    return 0;
}
                  
          