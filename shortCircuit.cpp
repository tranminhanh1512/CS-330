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