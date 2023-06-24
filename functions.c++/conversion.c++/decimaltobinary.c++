#include <iostream>
using namespace std;
void DecimalToBinary(int n)
{
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) 
   {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
   cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
   cout << binaryNumber[j];
   
}
int main()
{
   int n;
   cin>>n;
   DecimalToBinary(n);
   return 0;
}
 


