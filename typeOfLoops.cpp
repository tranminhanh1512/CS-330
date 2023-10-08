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

for (int m = 0; m <= 3; m++) {
    for (int n = 0; n <= 2; n++){
        cout << "Pair: " << m << ", " << n << endl;
    }
}
return 0;
}
