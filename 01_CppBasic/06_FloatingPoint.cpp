//
// Created by BochengHu on 2022/6/30.
//
#include <iostream>
using namespace std;

int main() {
    // 1. Define the float type and print it
    // In default, 3.14 is stored by double
    // attach f to the number: 3.14f, use f to store it
    float num1 = 3.14f;
    double num2 = 3.14;

    cout << "num1: " << num1 << endl; // 3.14
    cout << "num2: " << num2 << endl; // 3.14

    // 2. Test the default print length
    float num3 = 3.1415926f;
    double num4 = 3.1415926;

    cout << "num3: " << num3 << endl; // Only print 3.14159
    cout << "num4: " << num4 << endl; // Only print 3.14159


    // 3. Print the occupied storage space
    cout << "float occupies " << sizeof(float) << " bytes" << endl; //4 bytes
    cout << "double occupies " << sizeof(double) << " bytes" << endl; //8 bytes

    // 4. Scientific Notation
    float num5 = 3e2; // 3x10^2
    cout << "num5 = " << num5 << endl; // 300

    float num6 = 3e-2; // 3x10^2
    cout << "num6 = " << num6 << endl; // 0.03
    return 0;
}