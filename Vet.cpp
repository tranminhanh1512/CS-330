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
