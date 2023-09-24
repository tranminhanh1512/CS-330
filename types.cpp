#include <iostream>
#include <string>
using namespace std;
  
int number(int n){
  return n;
}
  
int main() {
  
    // Here every variable is defined by 
    // specifying data type to it
    string str = "GeeksforGeeks";
    int num = 109;
    float flo = 12.99;
    cout << "I'm a string with value: " << str;
    cout << "I'm a number with value: " << number(num);
    cout << "I'm a floating point number with value: " << flo;
    return 0;
}