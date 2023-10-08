#include <iostream>
using namespace std;

void swapnum(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
 
int main(void)
{
    int a = 10, b = 20;
 
    // passing parameters
    swapnum(&a, &b);
 
    cout << "a is " << a << " and b is " << b<<endl;

    return 0;
}
