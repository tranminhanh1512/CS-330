# CS-330 - C++
This repo is an guideline for learning C++ in Structure and Organization of Programming Language.

Author: Minh Anh Tran

## I. Introduction and Overview of C++
### What is C++? 
C++ is one of the world's most popular programming languages. It is a cross-platform language that can be used to create high-performance applicationn and gives programmers a high level of control over system resources and memory. 
### History
C++ was created by Bjarne Stroustrup at Bell Labs in 1983 as an extension of the C programming language. It has expanded significantly overtime and was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20. C++ is usually implemented as a complier language and used to develop applications that can be adapted to multiple platforms. C++ has proven to be highly versatile, finding utility in diverse domains. Its notable strengths lie in software infrastructure and applications with limited resources. These include desktop software, video game development, server-side applications such as e-commerce, web search engines, and databases, as well as performance-critical systems like telephone switching systems and space probes.
### Why we should learn C++?
C++ has a large, active community of developers and users, and a wealth of resources and tools available for learning and using the language. It provides a solid foundation in programming concepts such as data structures, algorithms, memory management, and object-oriented programming. C++ supports cross-platform development and allows for fine-grained control over system resources and memory, 
There are many soures to learn C++ now, and here are top 5 resources for now:
- Best YouTube Channel: Caleb Hurry
- Best Tutoring Service: Wiingy
- Best Free Udemy Course: C++ Tutorial for Complete Beginners by John Purcell
- Best Free Certification Program: Coding for Everyone: C and C++ Specialization by Coursera
- Best Online Webinar: C++ Essential Training by LinkedIn Learning

## II. Getting Started
### Set up C++ environment on MacOS
C++ is a compiled language meaning your program's source code must be translated (compiled) before it can be run on your computer. Therefore, we have to install VS Code and a compliler.
#### 1. Install a complier
Open a macOS Terminal window and enter the following command:
```
xcode-select --install
```
To ensure that our clang is installed, enter the below command:
```
clang --version
```
#### 2. Install Visual Studo C/C++ IDE
- Firstly, we need to install [Visual Studio on MacOS](https://code.visualstudio.com/docs/setup/mac).
- Secondly, install the [C++ extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools). You can install the C/C++ extension by searching for 'c++' in the Extensions view.
- Lastly, install the [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to run C++. You can also install the Code Runner by searching for 'Code Runner' in the Extensions view.
When using Code Runner, the output of our program will be shown in the Output panel. If you want to see the output in the Terminal panel, you can follow my instruction:
  - Press ctrl+, to open up the settings panel
  - On the search bar type code runner terminal
  - You should be able to see an option named Code-runner: Run In Terminal
  - Check off the option and you are done
#### 3. "Hello World" program
Let's begin with the most basic program: "Hello World". Please enter the code below to run your very first C++ program:
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```
Next, push the Run code button to see the output. "Hello World!" will be printed in the terminal. 
#### 4. Write comments in C++
There are two ways to write comments in C++
- Multiline comments: The /* (slash, asterisk) characters, followed by comments, ending with the */ characters.
- Single-line comments: The // (two slashes) characters, followed by comments.

## III. Data types, Naming conventions, and Bindings
### Keywords
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

### Naming conventions
Naming conventions in C++ are not enforced by intepreter or compiler. They follow the standards within the C++ community. Below are some naming conventions in C++: 
- CamelCase: used for variables and functions.
- PascalCase: used for classes and types.
- Upper case with underscore: used for constants or macro.
  
### Naming requirements for identifiers
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
### Language Types
#### 1. C++ is a statically-typed language  

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

#### 2. C++ is considered strongly typed
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

#### 3. C++ can be both explicit and implicit. 
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
#### 4. Mutable vs Immuatable variables
In C++, variables can mutable or immutable based on how they are declared and used. Basically, primitives like int, double, float, char, string, bool or objects and non-constant variables are mutable. However, if you want your variable to be immutable, you can declare it with "const" keyword.

### Types in operation
#### 1. Operators
| Operator  | Operation 
| --------- | --------- 
| Arithmetic Operators | +: Addition  <br /> -: Subtraction  <br /> *: Multiplication  <br /> /: Division  <br /> %: Modulo Operation (Remainder after division) <br /> ++: Increment <br /> --: Decrement
| Assignment Operators | =: Assign <br /> +=: Add and assign <br /> -=: Subtract and assign <br /> *=: Multiply and assign <br /> /=: Divide and assign 
| Relational operators | ==: Is equal to <br /> !=: Not equal to <br /> >: Greater than <br /> <: Less than <br /> >= Greater than or Equal to <br /> <= Less than or Equal to
|Bitwise Operators | &: Binary AND <br /> \|: Binary OR <br /> ^: Binary XOR <br /> ~: Binary One's Complement <br /> <<: Binary Shift Left <br /> >>: Binary Shift Right
| Logical Operators | &&: Logical AND <br /> \|\|: Logical OR <br /> !: Logical NOT
| Other Operators | sizeof, ?:, & (for memory address of the operand), ., ->, << (print values), >> (gets input value)

#### 2. Mixed type
C++ allows mixed expression between _int_ and _float_. In a calculation, if there are 2 types: int and float, C++ will change the integer number to a floating point number with ome decimal place, which is 0, and the perform the calculation. The output data type will be float. However, we need to be careful when adding int and float because we may get rounding errors.

### Bindings
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

## IV. Loops and Functions
### Loops
When programming, sometimes we need to excecute some operations many times. Doing it mannually will waste a lot of time and memory. Therefore, loops come to "rescue" us. Loops allow us to do a performance multiple times. Like other languagues, loops in C++ also follow the general form of a for loop statement.

![alt text](https://www.tutorialspoint.com/cplusplus/images/loop_architecture.jpg)

There are 4 types of loop that C++ provides us: while loop, for loop, do...while loop, and nested loops.
#### 1. While loop
A  while loop will check the condition first, and then execute the body (a statement or a group of statements) while the condition remains true.

_Flow diadram of while loop_

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20220927171802/WhileloopinC2.png)

#### 2. For loop
For loop let us to repeat a sequence of statements at a specific number of times. It will initialize first, then check the condition, execute the body, and lastly update loop variable after each iteration.

_Flow diadram of for loop_

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/loops.png)

#### 3. Do...while loop
Do...while loop is a reverse loop of while loop. It will execute the body first, then check the condition at the end of the loop body. Of course, it will perform operations as long as the condition is true.

_Flow diadram of do,,,while loop_

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20221006152307/dowhileloopinc.png)

#### 4. Nested loop
Nested loop is a loop that allows us to do a loop in other loop. You can choose whatever loop above, and it will follow the rule of the loop you choose to execute.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

// While loop
int i = 0;
while (i <= 3) {
	cout << "Hello the " << i << " times" << endl;
	i++;
}

// For loop
for (int j = 0; j <= 3; j++) {
	cout << "Hi the " << j << " times" << endl;
}

// Do-while loop
int k = 0;
do {
	cout << "Xin chao the " << k << " times" << endl;
	k++;
} while (k <= 3);

// Nested loop
for (int m = 0; m <= 3; m++) {
    for (int n = 0; n <= 2; n++){
        cout << "Pair: " << m << ", " << n << endl;
    }
}
return 0;
}
```

### Functions
#### 1. Declare functions
To declare a function, we need to specify return type first, then function name, followed by parentheses, which is where you pass paramteter in. For function that don't return anything, instead of choosing return type, we will use 'void' keyword.
```
return_type function_name(parameters) {
	function body
}
```
Now, we will try to write a simple function: Multiply2num():
```cpp
#include <iostream>
using namespace std;

int multiply2nums(int x, int y){
    int z = x*y;
    return z;
}

int main() {
    int a = multiply2nums(10,2);
    cout << a << endl;
}
```
In C++, we have to declare functions before using it, but order does matter.

#### 2. Recursive function:
C++ also support recursive function, but we need to be very careful to define the base and the exit condition to it, or else it will run infinitely.
```cpp
// Factorial of n = 1*2*3*...*n
// Link: https://www.programiz.com/cpp-programming/recursion#google_vignette
#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
```
#### 3. Parameters and Return values
Like Python and Java, when defining parameters for function, we can pass as many paramters as we want, and they do not need to be the same type. However, when we return values from function. we can't return multiple values at the same time, we can only return one value per time. 
#### 4. Passing arguments
There are three ways we can pass in an argument to function in C++: pass by value, pass by reference, pass by address aka pointer.
- Pass by values: like what we did in a.
- Pass by reference:
```cpp
//Link: https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-cpp/
#include <iostream>
using namespace std;
void swap(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 45, b = 35;
	cout << "Before Swap\n";
	cout << "a = " << a << " b = " << b << "\n";

	swap(a, b);

	cout << "After Swap with pass by reference\n";
	cout << "a = " << a << " b = " << b << "\n";
}
```
- Pass by address:
```cpp
// Link: https://www.geeksforgeeks.org/parameter-passing-techniques-in-c-cpp/
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
```
### Storage Locations of Arguments, Parameters, and Local Variables 
- Local-function variables: on stack
- Global or static variables: per-process data area
- Parameters and Arguments:
  - Primitives data types: on stack
  - Objects or more complex data types: ref-to-heap-on-stack, which means the reference to the object is stored on the stack while the object itself is in the heap.

### Scoping rules of variables
- Global variables, function definitions, and function prototypes placed outside all functions can be used anywhere in the file and exist for the entire duration of the program.

- Variables that are declared inside a function or a code block are local to its function/code block and can't be used outside. They only exist during the execution of function/code block. Everytime we call a function/code block, the varibles inside them will be refresh. All of those variables will be disappear when the function/code block ends.

- Static variables in a block/function can only be accessed inside its function/block of code. However, it will retain its value across function calls and exists from the first call until the program ends.

### Side effects in C++
Side effects happen when a function that does anything other than return its value, such as accepting input, producing output, or modifying the values of variables (other than its own local variables). In C++, side effects will occur when a subprogram accidently modifies a global variable, or the value of a pointer that is passed as an argument. In C++, there are no strict guardrails against side-effects, but there are some ways we can do to avoid it: use immutable or constant variable, minimize global variables, or avoid  unrestricted pointers. Like Java and Python, C++ use static scope : all variables bound to a scope before run.

## V. Loops, if/else, switch, logical operators
### Boolean values
C++ has a _boolean_ data type, which is declared with the _bool_ keyword, can take the values true or false. The default numeric values of boolean values are 1 for true and 0 for false. Therefore, we can use bool-type variables or values true and false in mathematical expressions also. Howver, the most common use of the bool datatype is for conditional statements. 
### Conditional statements
There are many types of conditional statements in C++
![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230424101456/Conditional-Statements-in-c.webp)

- If statements:
  
![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230310131453/flowchart-of-if-in-c.png)

- If-esle statments:
  
![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230220123250/flowchart_of_if_else_in_c.png)

- Nested if-else statements:

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230424102041/nested-if-else-flowchart.webp)

- If-else-if ladder statements:

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230424101627/if-else-if-flowchart.webp)

- Switch statements:

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230224161406/switch-case-in-c.png)

C++ also supports Switch-case and it aslo use "break" to get out of it. We can't use "continue" to have all of the conditions evaluated.


In C++, code blocks under each condition in selection control statements are delimited using curly braces { }. Let's practice with some examples of conditional statements!
```cpp
#include <iostream>
using namespace std;

int main() {
   int x = 5;
   //one-condition if/else statement
   if( x > 5){
       cout << "x is bigger than 5" <<endl;
   }else {
       cout << "x is equal or less than 5" << endl;
   }


    // multi-condition if/else statement
    int y = 2;
    int z = 10;
    if (y > 5 && z < 10){
        cout << "Here" <<endl;
    }else {
        cout << "There" <<endl;
    }

    //if-elseif-else statments
    int a = 25;
    if (a%3==0){
        cout<<"a is divisible by 3"<<endl;
    } else if (a%5==0) {
        cout<<"a is divisible by 5"<<endl;
    } else {
        cout<<"a is not divisible by both 3 or 5"<<endl;
    }

    //switch case
    int dogAge = 5; 
  
    // declaring switch cases 
    switch (dogAge) { 
    case 2: 
        printf("Your dog is a kid"); 
        break; 
    case 5: 
        printf("Your dog is a teenager"); 
        break; 
    default: 
        printf("All dogs are our babies"); 
        break; 
    } 

   return 0;
}
```
While using nested conditional statements, we may encounter dangling else problems which else statements don't know its if. To resolve this in C++, we must use correct braces and identation or if-else if-else statements to specify if-else pair correctly.

### Short-circuit
C++ uses short-circuit evaluation. It occurs while evaluating ‘&&’ (AND) and ‘||'(OR) logical operators. 
- For and "&&" operator, if the left condition is false, the expression will be always false no matter of the right condition. So C++ will avoid evaluating the right-hand side in this situation. C only checks the second one when the first condition is true.
- For or "||" operator, if the left-hand side is true, the expression will always yield true irrespective of the value of the right-hand side, so C won't continue to evaluate the right-hand side. C only checks the second condition if the first one is false.
```cpp
#include <iostream>
using namespace std;

int main() {
   bool b1 = true;
   bool b2 = false;

    // AND operator
   if (b1&&b2){
       cout<< "True"<<endl;
   }else{
       cout<< "False"<<endl;
   }

    // OR operator
    if (b1||b2){
       cout<< "True"<<endl;
    }else{
       cout<< "False"<<endl;
    }
    return 0;
}
```

## VI. Classes and Inheritance
As with many other programming languages, C++ also supports the concept of objects and classes. In C++, a class is a building block that leads Object-Oriented programming. It is a user-friendly data type, which is a detailed description, a definition, and a template for what an object will be. It has data members and member functions. The blueprint for any object is a class, which can be accessed and used by creating an instance. Object is an instance of class, which helps us access class attributes and methods.
### Defining Class and Declaring Objects
To define a class in C++, we use the keyword _class_, followed by the name of class. Class name should be a noun, in mixed case with upper case letters as word separators, and no underscore. Especially, the first character in the class name must be capitalized. The body of a class is defined within the curly brackets and a semicolon at the end. 

To declare an object, we need to specify the class name first, then the object name. After that, we can access the class attributes by using the dot syntax on the object.
```
class ClassName;
ClassName ObjectName;
Object.classFunction;
```
### Functions in Class
C++ is a special programming language, we can define class function by two ways: inside and outside the class definition.
#### 1. Inside class
There are three elements inside our class: access specifier, data members, and member functions. Here is a format of a class:
```
class ClassName
{
	Access specifier;
	Data members;
	Functions(parameters);
};
```
#### 2. Outside class
To define a function outside of a class, scope resolution operator :: is used.
```
returnType ClassName::FunctionName(parameters)
{
	//body of function;
}
```
#### 3. Special functions in class
- Constructors: called by the compiler every time an object of that class is instantiated.
- Destructors: called by the compiler when the scope of the object ends.
- ToString: return a string that represents the current object.
### Inheritance
A class can be derived from multiple classes and inherits all data and functions from all these parent class. To define an inheritance class, we use a class derivation list to specify the base class. Here is the format of inheritance:
```
class derivedClassName: AccessSpecifier ParentClassNameA, AccessSpecifier ParentClassNameB, etc
```
However, a derived class can only access non-private members of parent class. Therefore, if you want to create an inheritance class, make sure you declare all data and functions in the parent class to be non-private.

Inheritance allows a derived class to provide a specific implementation of a function that is already declared in its base class. Therefore, we will have overloading methods name. The way that C++ solves this problem is let the child class overrides the base class functions. The function in the parent class will act like a default, and when we use child class, the function with the same name in it will be used instead. 

_Note_: As we mention before, C++ is a static typed programming language, which means the decision about which function to call is made at compile time. We need to create exact object from exact class in order to use the right function because the specific function that gets called is determined by the type of the object at running time.
### Example
Let's me walk you through an example of using class and inheritance in C++ to help you understand and explore more about it.

In this example, we have a super class: Animal, and two sub classes: Cat and Dog. In Cat and Dog classes, we overrides the humanEquiAge function because cats and dogs have different ways to calculate their human equivalent age. In the main driver, I create 1 dog and 1 cat and then print out their information.
```cpp
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;
    int weight;

public:
    void setAnimal(string n, int a, int w) {
        name = n;
        age = a;
        weight = w;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    int humanEquiAge() {
        if (age == 1) {
            return 15;
        } else if (age == 2) {
            return 24;
        } else {
            return 24 + (age - 2) * 4;
        }
    }

    string toString() {
        return name + ", age: " + to_string(age) + ", weight: " + to_string(weight);
    }
};

class Dog : public Animal {
public:
    Dog(string n, int a, int w) {
        setAnimal(n, a, w);
    }

    int humanEquiAge() {
        if (age == 1) {
            return 15;
        } else if (age == 2) {
            return 21;
        } else {
            if (weight < 20) {
                return 21 + (age - 2) * 4;
            } else if (weight >= 20 && weight < 50) {
                return 21 + (age - 2) * 5;
            } else if (weight >= 50 && weight < 90) {
                return 21 + (age - 2) * 6;
            } else {
                return 21 + (age - 2) * 7;
            }
        }
    }
};

class Cat : public Animal {
public:
    Cat(string n, int a, int w) {
        setAnimal(n, a, w);
    }

    int humanEquiAge() {
        if (age == 1) {
            return 15;
        } else if (age == 2) {
            return 24;
        } else {
            return 24 + (age - 2) * 4;
        }
    }
};

int main() {
    Dog dog("Nick", 7, 21);
    Cat cat("Vang", 11, 10);

    cout << "Dog: " << dog.toString() << ", human equivalent age: " << dog.humanEquiAge() << endl;
    cout << "Cat: " << cat.toString() << ", human equivalent age: " << cat.humanEquiAge() << endl;

    return 0;
}
```
## VII. References
- [C++ Programming Language Instruction On GeeksforGeeks](https://www.geeksforgeeks.org/c-plus-plus/?ref=lbp)
- [Wikipedia](https://en.wikipedia.org/wiki/C%2B%2B)
- [C++ Tutorial on W3schools](https://www.w3schools.com/cpp/default.asp)
- [C++ Programming with Visual Studio](https://code.visualstudio.com/docs/languages/cpp)
- [Programiz C++ Tutorial](https://programiz.pro/learn/master-cpp?utm_source=tutorial-sidebar-nav&utm_campaign=programiz&utm_medium=referral)
- Other sources for example code:
  - [Type conversions](https://www.scaler.com/topics/cpp/type-conversion-in-cpp/) 















