//function is a piece of code that performs specific task 
//syntax:
//returntype functionName(parameter1, parameter2,.....parametern):along with data type
//{function body}
#include<iostream>
using namespace std;
void print(int num)
{
    cout<<num<<endl;
    return;
}
int add(int num1 , int num2)
{
    print (num1);
    print (num2);
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int a,b;
    a=2,b=3;
    cout<<"sum="<<add(a,b);
    return 0;
    //1.only names of variable are passed and not their datatypes while calling a function.
    //2.we pass the values and not variable(a,b)themselves.local variables(num1,num2) 
    //are created in functions which are destroyed on returning from them.
    //3.a function can be called from any other function or main function but it starts 
    //from main functions.   
}