#include <iostream>
using namespace std;

 main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Display multiplication table using a for loop
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

}

