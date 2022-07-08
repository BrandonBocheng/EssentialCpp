//
// Created by BochengHu on 2022/6/15.
//
#include<iostream>
using namespace std;

// Identifier naming rules
// 1. Identifier could not be the keyword
// 2. Identifier is composed of letter, number, and _underline
// 3. Identifier's first letter can only be letter, and _underline
// 4. Identifer is case sensitive
int main() {

    // 1. Identifier could not be the keyword
    // int int = 10;

    // 2. Identifier is composed of letter, number, and _underline
    int abc = 100;
    int _abc = 100;
    int _123abc = 10;

    // 3. Identifier's first letter can only be letter, and _underline
    // int 123ab = 10;

    // 4. Identifier is case sensitive
    int aaa = 100;
    cout << aaa << endl;
    // cout << AAA << endl; // case sensitive, AAA is not the same as the aaa


    // suggestion: when naming the variable, you should let other know the meaning when seeing it
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    cout << "sum = " << sum << endl;
    system("pause");
    return 0;
}