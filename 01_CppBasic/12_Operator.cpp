//
// Created by BochengHu on 2022/6/30.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

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
    double double_residual = d1 / d2; // 2.27273
    cout << "residual division of two double number: " << double_residual << endl;

    // 3. get mod
    int num3 = 10;
    int num4 = 20;
    int mod = num3 % num4;
    cout << "Two number mod: " << mod << endl; // 10

    // notice: x % y, y cannot be zero
    // both x and y should be integer

    // 4. ++, --
    // a++ calculate the expression first, then a + 1, ++a do the a plus 1, the calculate the operator

    // 5. +=, -=, *= , /=, %=
    int num5 = 10;
    num5 += 5;
    cout << "num5 += result: " << num5 << endl; // 15
    num5 /= 7;
    cout << "num5 /= result: " << num5 << endl; // 2
    ++num5 %= 2;
    cout << "num5 %= result: " << num5 << endl; // 1

    // 6. comparison operator
    // ==, !=, <, >, <=, >=

    // 7. logic operator
    // !, AND &&, OR ||
    int num6 = 10;
    cout << "!num6: " << !num6 << endl;
    cout << "num6: " << num6 << endl;
    cout << "!!num6: " << !!num6 << endl;

    int num7 = 20;
    // in OR operator, the second condition will not execute if the first condition is true
    cout << "Check result: " << (num6 >= 5 || ++num7) << endl; // 1
    cout << "num7 result: " << num7 << endl;
    return 0;
}