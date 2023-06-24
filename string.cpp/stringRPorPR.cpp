#include<bits/stdc++.h>
using namespace std;

void solve(int X,int Y,string S){
      //code here
      int ct1=0,ct2=0;
      int n=S.length();
      for(int i=0;i<n-1;i++){
          if(S[i]=='p'){
            cout<<"2";
              for(int j=i+1;j<n;j++){
                  if(S[j]=='r'){
                    cout<<"1";
                      ct1++;
                      S.erase(i,1);
                      S.erase(j,1);
                  }
                  
              }
          }
          else if(S[i]=='r'){
              for(int j=i+1;j<n;j++){
                  if(S[i]=='p'){
                      ct2++;
                      S.erase(i,1);
                      S.erase(j,1);
                  }
                  
              }
          }
      }
      cout<<ct1*X+ct2*Y;
    }

int main()
{
    int X=4;
    int Y=5;
    string S="abppprrr";
    solve(X,Y,S);
    return 0;
}