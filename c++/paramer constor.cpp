#include <iostream>
using namespace std;

// Constructor: A special method that is called when an object is created
// 3 types of constructors:
// 1) Default
// 2) Parameterized
// 3) Copy

class Hello {
    public: 
    Hello(string message) {
        cout << message << endl;
    }
    
    void myFun(int n) {
        int fac = 1;
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
        cout << "Factorial is: " << fac << endl;
    }
};

int main() {
    Hello obj("Welcome to our website!!");
    obj.myFun(5); // Example: calculating factorial of 5
    return 0;
}

