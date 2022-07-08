//
// Created by BochengHu on 2022/6/29.
//
#include <iostream>
using namespace std;

int main()
{

    // short 2 bytes(-32768 - 32767)
    short num1 = 10;
    short num2 = 32768;

    // int 4 bytes(-2^31 - 2^31-1)
    int num3 = 32768;

    // long, for 64 bits linux machine, 8 bytes
    long num4 = 10;

    // long long, 8 bytes
    long long num5 = 190;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "num5 = " << num5 << endl;

    system("pause");
    return 0;
}