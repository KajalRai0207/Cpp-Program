#include<bits/stdc++.h>
using namespace std;
string breakPalindrome(string palindrome) {
    if(palindrome.length()<=1){
        return "";
    }
    for(int i=0;i<palindrome.length()/2;i++){
        if(palindrome[i]!='a'){
            palindrome[i]='a';
            return palindrome;
        }
    }
    palindrome.pop_back();
    palindrome+="b";   
    return palindrome;
}

int main()
{
    string str="aba";
    cout<<breakPalindrome(str);
    return 0;
}