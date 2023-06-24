#include <iostream>
using namespace std;
struct trial
{
    // Data Members
    int roll;
    string gender;
    int marks;
     
    // Member Functions
    void printDetails()
    {
        cout<<"Roll = "<<roll<<"\n";
        cout<<"Gender = "<<gender<<"\n";
        cout<<"Marks = "<<marks;
    }
};

// No output is obtained for this code as no main function is declared
