# CS-330 - C++
This repo is an guideline for learning C++ in Structure and Organization of Programming Language.

Author: Minh Anh Tran

## I. Introduction and Overview of C++
### 1. What is C++? 
C++ is one of the world's most popular programming languages. It is a cross-platform language that can be used to create high-performance applicationn and gives programmers a high level of control over system resources and memory. 
### 2. History
C++ was created by Bjarne Stroustrup at Bell Labs in 1983 as an extension of the C programming language. It has expanded significantly overtime and was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20. C++ is usually implemented as a complier language and used to develop applications that can be adapted to multiple platforms. C++ has proven to be highly versatile, finding utility in diverse domains. Its notable strengths lie in software infrastructure and applications with limited resources. These include desktop software, video game development, server-side applications such as e-commerce, web search engines, and databases, as well as performance-critical systems like telephone switching systems and space probes.
### 3. Why we should learn C++?
C++ has a large, active community of developers and users, and a wealth of resources and tools available for learning and using the language. It provides a solid foundation in programming concepts such as data structures, algorithms, memory management, and object-oriented programming. C++ supports cross-platform development and allows for fine-grained control over system resources and memory, 
There are many soures to learn C++ now, and here are top 5 resources for now:
- Best YouTube Channel: Caleb Hurry
- Best Tutoring Service: Wiingy
- Best Free Udemy Course: C++ Tutorial for Complete Beginners by John Purcell
- Best Free Certification Program: Coding for Everyone: C and C++ Specialization by Coursera
- Best Online Webinar: C++ Essential Training by LinkedIn Learning

## II. Getting Started
### 1. Set up C++ environment on MacOS
C++ is a compiled language meaning your program's source code must be translated (compiled) before it can be run on your computer. Therefore, we have to install VS Code and a compliler.
#### a. Install a complier
Open a macOS Terminal window and enter the following command:
```
xcode-select --install
```
To ensure that our clang is installed, enter the below command:
```
clang --version
```
#### b. Install Visual Studo C/C++ IDE
- Firstly, we need to install [Visual Studio on MacOS](https://code.visualstudio.com/docs/setup/mac).
- Secondly, install the [C++ extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools). You can install the C/C++ extension by searching for 'c++' in the Extensions view.
- Lastly, install the [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to run C++. You can also install the Code Runner by searching for 'Code Runner' in the Extensions view.
When using Code Runner, the output of our program will be shown in the Output panel. If you want to see the output in the Terminal panel, you can follow my instruction:
  - Press ctrl+, to open up the settings panel
  - On the search bar type code runner terminal
  - You should be able to see an option named Code-runner: Run In Terminal
  - Check off the option and you are good to go.
#### c. "Hello World" program
Let's begin with the most basic program: "Hello World". Please enter the code below to run your very first C++ program:
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```
Next, push the Run code button to see the output. "Hello World!" will be printed in the terminal. 
#### d. Write comments in C++
There are two ways to write comments in C++
- Multiline comments: The /* (slash, asterisk) characters, followed by comments, ending with the */ characters.
- Single-line comments: The // (two slashes) characters, followed by comments.

## III. Data types, Naming conventions, and Bindings
### 1. Keywords
A key word, or a reversed word, is a word that are used for a special purpose and cannot be used as an identifier, such as the name of a variable, function, or label – it is "reserved from use". In C++, there are 95 total keywords. Here is a table for some common keywords:

<table class="table">
  <tr>
    <th colspan="5">C++ keywords</th>
  </tr>
	<tr>
		<td>asm</td>
		<td>double</td>
		<td>new</td>
		<td>switch</td>
		<td>auto</td>
	</tr>
	<tr>
		<td>else</td>
		<td>operator</td>
		<td>template</td>
		<td>break</td>
		<td>enum</td>
	</tr>
	<tr>
		<td>private</td>
		<td>this</td>
		<td>case</td>
		<td>extern</td>
		<td>protected</td>
	</tr>
	<tr>
		<td>throw</td>
		<td>catch</td>
		<td>float</td>
		<td>public</td>
		<td>try</td>
	</tr>
	<tr>
		<td>char</td>
		<td>for</td>
		<td>register</td>
		<td>typedef</td>
		<td>class</td>
	</tr>
	<tr>
    <td>friend</td>
		<td>return</td>
		<td>union</td>
		<td>const</td>
		<td>goto</td>
	</tr>
	<tr>
		<td>short</td>
		<td>unsigned</td>
		<td>continue</td>
		<td>if</td>
		<td>signed</td>
	</tr>
	<tr>
		<td>virtual</td>
		<td>default</td>
		<td>inline</td>
		<td>sizeof</td>
		<td>void</td>
	</tr>
 	<tr>
		<td>delete</td>
		<td>int</td>
		<td>static</td>
		<td>volatile</td>
		<td>do</td>
	</tr>
 	<tr>
		<td>long</td>
		<td>struct</td>
		<td>while</td>
		<td>xor</td>
		<td>typeid</td>
	</tr>
</table>

### 2. Naming conventions
Naming conventions in C++ are not enforced by intepreter or compiler. They follow the standards within the C++ community. Below are some naming conventions in C++: 
- CamelCase: used for variables and functions.
- PascalCase: used for classes and types.
- Upper case with underscore: used for constants or macro.
  
### 3. Naming requirements for identifiers
We have explored what words we can't not use when we name a file or a variable in C++. C++ is a case sensitive programming language, therefore, we have to be careful when naming for a variable. Rules for naming identifiers:
- Identifier names can not start with a digit or any special character.
- A keyword cannot be used as s identifier name.
- Only alphabetic characters, digits, and underscores are permitted.
- The upper case and lower case letters are distinct. i.e., A and a are different in C++.
<!-- https://www.geeksforgeeks.org/cpp-keywords/ -->

**Let's create variable of common data types in C++ using rules above**

To create a variable, specify the type and assign it a value: _type variableName = value;_

```cpp
#include <iostream>
#include <map>
#include <iterator>


using namespace std;

int main() {
    //integer
    int myNum = 15;
    // string
    string greetings = "Hello word!";
    // floating point
    double myNumFloat = 15.12;
    // boolean value
    bool b1 = true;
    // array
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    // map
    map<string, int> clothingStore = { {"tshirt", 10}, {"pants", 12}, {"sweaters", 18} };
    return 0;
}
```
### 4. Language Types
#### a. C++ is a statically-typed language  

```cpp
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
```
<!-- https://www.geeksforgeeks.org/what-is-a-typed-language/ -->

#### b. C++ is considered strongly typed
```cpp
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
```
<!-- https://www.geeksforgeeks.org/strict-type-checking-in-cpp/ -->

#### c. C++ can be both explicit and implicit. 
```cpp
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
```
<!-- https://www.scaler.com/topics/cpp/type-conversion-in-cpp/ -->
#### d. Mutable vs Immuatable variables
In C++, variables can mutable or immutable based on how they are declared and used. Basically, primitives like int, double, float, char, string, bool or objects and non-constant variables are mutable. However, if you want your variable to be immutable, you can declare it with "const" keyword.

### 5. Types in operation
#### a. Operators
| Operator  | Operation 
| --------- | --------- 
| Arithmetic Operators | +: Addition  <br /> -: Subtraction  <br /> *: Multiplication  <br /> /: Division  <br /> %: Modulo Operation (Remainder after division) <br /> ++: Increment <br /> --: Decrement
| Assignment Operators | =: Assign <br /> +=: Add and assign <br /> -=: Subtract and assign <br /> *=: Multiply and assign <br /> /=: Divide and assign 
| Relational operators | ==: Is equal to <br /> !=: Not equal to <br /> >: Greater than <br /> <: Less than <br /> >= Greater than or Equal to <br /> <= Less than or Equal to
|Bitwise Operators | &: Binary AND <br /> \|: Binary OR <br /> ^: Binary XOR <br /> ~: Binary One's Complement <br /> <<: Binary Shift Left <br /> >>: Binary Shift Right
| Logical Operators | &&: Logical AND <br /> \|\|: Logical OR <br /> !: Logical NOT
| Other Operators | sizeof, ?:, & (for memory address of the operand), ., ->, << (print values), >> (gets input value)

#### b. Mixed type
C++ allows mixed expression between _int_ and _float_. In a calculation, if there are 2 types: int and float, C++ will change the integer number to a floating point number with ome decimal place, which is 0, and the perform the calculation. The output data type will be float. However, we need to be careful when adding int and float because we may get rounding errors.

### 6. Bindings
In C++, when we declare a variable or an object, we specify its type and name, and the compiler allocates memory for that object based on its type. For primitives data types and array/list, C++ will store on a stack. However, when we use dynamic memory allocation (e.g., new or malloc), it will store on the heap. For operators, it will be bound to their operations during compilation. 
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = "7" + 11;
    int y = "7" * 11;
}
```
For example, we can't run the code above because of the mismatch type. In C++, we need to use same data types (except for int and float) in order to do the operation. On the other hand, for array/list, C++ allows us to create an array that can have elements of different types, unlike Java. But, you should pay attention when doing this because mixed types can lead to some errors like readability. C++ also let us to convert between data types, but once again, _be careful_. 

There is one built-in complex data type, which is one of the core components in C++, pointer. Pointer is used to store the address of other variables. Pointers in C++ provide flexibility but can introduce issues like pointer arithmetic errors and dangling pointers.

In some other languages, the compiler will manage memory. However, with C++, it gives us the control to allocate memory of variables. It's a huge advantage, but it is also a disadvantage because failing to deallocate the memory will lead to memory leaks and undefined behavior. 

## IV. References
- [C++ Programming Language Instruction On GeeksforGeeks](https://www.geeksforgeeks.org/c-plus-plus/?ref=lbp)
- [Wikipedia](https://en.wikipedia.org/wiki/C%2B%2B)
- [C++ Tutorial on W3schools](https://www.w3schools.com/cpp/default.asp)
- [C++ Programming with Visual Studio](https://code.visualstudio.com/docs/languages/cpp)
- [Programiz C++ Tutorial](https://programiz.pro/learn/master-cpp?utm_source=tutorial-sidebar-nav&utm_campaign=programiz&utm_medium=referral)
- Other sources for example code:
  - [Type conversions](https://www.scaler.com/topics/cpp/type-conversion-in-cpp/) 















