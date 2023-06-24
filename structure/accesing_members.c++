#include <iostream>
using namespace std;
 
struct Point {
    int x=0;
    int y;
};
 
int main()
{
    struct Point p1 ;
    p1= { 0,9 };
 
    // Accessing members of point p1
    //p1.x = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;
 
    return 0;
}