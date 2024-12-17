#include <iostream>
using namespace std;

// disstructor: A special method that is called when an object is created
// 3 types of constructors:
// 1) Default
// 2) Parameterized
// 3) Copy

class Hello {
    public: 
    Hello(string message) {
        cout << message << endl;
    }
    ~Hello() 
	{ cout << "Object is being destroyed" << endl; }
    void printTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

 main() {
    Hello obj("Welcome to our website!!");
    obj.printTriangle(5); // Example: printing a right-angled triangle with 5 rows
 
}

