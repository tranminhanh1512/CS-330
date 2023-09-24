#include <iostream>
using namespace std;
 
void add(int a, double b)
{
    // printing a and b.
    cout << "sum=" << (a + b);
}
 
void add(double a, int b)
{
    // printing a and b.
    cout << endl << "sum=" << (a + b);
}
 
int main()
{
    // calling add function on line 4.
    add(10, 2.5);
 
    // calling add function with 3
    // parameters that will give
    // error.
    add(5.5, 6, 7);
    return 0;
}