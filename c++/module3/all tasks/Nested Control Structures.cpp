#include <iostream>
using namespace std;

 main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Nested loop to print a right-angled triangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to the next line after each row
    }

 
}

