#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
    return length * width;
}

 main() {
    float length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;

    cout << "Area of rectangle: " << calculateArea(length, width) << endl;


}

