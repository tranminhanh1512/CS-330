#include <iostream>
using namespace std;

int main() {
    // implicit example
    int int_var1 = 50;
    char char_var1 = 'a';

    int_var1 = int_var1 + char_var1;
    // char_var is implicitly converted to the integer ASCII of 'a'.
     // ASCII of 'a' is 97.

    cout << "The value of (50 + 'a') is: " << int_var1 << endl;

    // Now, converting int_var to a float (implicitly).
    float float_var1 = int_var1 * 1.5;

     cout << "The value of float_var is: " << float_var1 << endl;

    // explicit example
    char char_var2 = 'a';
    int int_var2;

     // Explicitly converting a character variable to an integer variable.
    int_var2 = (int) char_var2; // Using cast notation.

    cout << "The value of char_var is: " << char_var2 << endl;
    cout << "The value of int_var is: " << int_var2 << endl;

    return 0;
}
