//
// Created by BochengHu on 2022/6/30.
//
#include <iostream>
using namespace std;

int main() {

    // 1. char variable only store the corresponding ascii code
    char ch = 'a';
    cout << ch << endl;
    cout << "char data type occupy " << sizeof(ch) << " bytes" << endl; // 1 bytes
    
    // 2. Print the char variable corresponding ascii code
    cout << "a ascii code: " << (int)ch << endl; // 97
    cout << "A ascii code: " << (int)'A' << endl; // 65

    return 0;
}