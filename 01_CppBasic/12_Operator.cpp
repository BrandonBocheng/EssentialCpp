//
// Created by BochengHu on 2022/6/30.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    // 1. Integer operator
    int num1 = 5;
    int num2 = 10;
    int sum = num1 + num2;
    int prod = num1 * num2;
    int division = num1 / num2; // result is also int
    int residual = num1 % num2;

    cout << "sum of two number: " << sum << endl;
    cout << "prod of two number: " << prod << endl;
    cout << "integer division of two number: " << division << endl;
    cout << "residual division of two number: " << residual << endl;

    // 2. float number operate
    double d1 = .5;
    double d2 = .22;
    double double_residual = d1 / d2;
    cout << "residual division of two double number: " << double_residual << endl;

    return 0;
}