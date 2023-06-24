#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int pascalTriangle(int n){
    for(int i=0;i<=n;i++){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int c=factorial(i)/(factorial(i-j)*factorial(j));
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    pascalTriangle(8);
    return 0;
}