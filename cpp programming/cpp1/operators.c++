// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int c =i++ + ++i;
//     cout<<c<<endl;
//     return 0;
// }
/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,j=2;
//     int k=i + j + i++ + j++ + ++i + ++j;
//     cout<<k<<endl;
//     return 0;
// }
/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     i= i++ - --i + ++i - --i;
//     cout<<i<<endl;
//     return 0;
// }
/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1, j=2, k=3;
//     int m = i-- - j-- - k--;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     cout<<k<<endl;
//     cout<<m<<endl;
//     return 0;
// }
/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i= 10,j=20,k;
//     k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++; 
//     cout<<i<<endl;
//     cout<<j<<endl;
//     cout<<k<<endl;
//     return 0;
// }

//operators are symbols that tell the compiler to perform some specific operations.
//1. arithmetic operator
//      a.Binary operator:+,-,*,/,%;
//      b.Unary operator:++,--
//            ++:incrementer;     --:decrementer;
//    pre incrementer(++a)            post incrementer(a++)
//   increment a instantly            current value of a is preserved temporarily.
//                                    a will get incremented before next 
//                                    statement is executed.
//example
//int a=10;                           int a=10;
//int b;                              int b;
//b=++a                               b=a++
//cout<<a<<""<<b<<endl;               cout<<a<<""<<b<<endl;
//output:11 11                         output:11 10

// 2.relation operator
// defines a relation between two operands
// return a boolean value
// == : gives true value if both operands have equal value
// != :gives true value if both operand are not equal
// > :gives true value if left operand is more than right operand
// < :gives true value if left operand is less than right operand
// >= :gives true value if left operand is more than or equal to right operand
// <= :gives true value if left operand is less than or equal to right operand


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter any number\n";
//     cin>>n;
//     if(n==10)
//     {
//         cout<<"it is equal to 10\n";
//     }
//     else if(n>10)
//     {
//         cout<<"it is more than 10\n";
//     }
//     else if(n<10)
//      cout<<"it is less than 10\n";
//     return 0;
// }



// logical operators
// used to connect multiples conditions/expressions together or to reverse logical values.
// && :AND gives us true if both operands are true,else false
// || :OR gives us true if atleast one of the operands are true
// ! :NOT gives the opposite logical value of the operand

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"\n";
//     return 0;
// }

// Bitwise operators
// bitwise operators are the operators that opeate on bits and perform bit-by-bit operations.
// & : binary AND. copies a bit to the result if it exists in both operands.
// | : binary OR.copies a bit if it exists in either operand
// ^ : binary XOR.copies the bit if it is set in one operand but not both
// ~ : binary ones complement. Flips the bit.
// << : binary left shift. the left operands bits are moved left by the number of places specified by the right operand.
// >> : binary right shift operator. the left operands bits are moved right by the number of places specified by the right operand.
// If shift operator is applied on a number N then,
// N<<a will give a result N*2^a.
// N>>a will give a result N/2^a

// Assignment operators
// = : assign value of right operand to left operand
// += : adds right operand to the left operand and assign the result to the left operand
// -+ : subtract right operand to the left operand and assign the result to the left operand
// *= : multiplies right operand with the left operand and assign the result to the left operand
// /= : divides left operand with the right operand and assign the result to left operand.

// Misc operators
// sizeof() : return the size of variables
// eg: if a is integer then size of (a) will return 4
// condition?X:Y : conditional operator=if condition is true, then return value of X or else value of Y.
// cast : casting operators convert one data type to another.
// comma(,) : comma operator cause a seequence of operations to be performed.The value of the entire comma expression is the value of the last expression of the comma-seperated list.


// for commenting
// ctrl+/:for commenting and uncommenting
// ctrl+k+c: for commenting
// ctrl+k+u :for uncommenting
// shift+alt+a: for commenting