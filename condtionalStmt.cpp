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