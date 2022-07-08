//
// Created by BochengHu on 2022/6/30.
//
#include <iostream>
using namespace std;

int main()
{

    // Print the size of the data type
    // grammar: size(data type / variable)

    short num1 = 10;
    cout << "short uses memory: " << sizeof(num1) << " bytes" << endl;
    cout << "short uses memory: " << sizeof(short) << " bytes" << endl;

    int num2 = 10;
    cout << "int uses memory: " << sizeof(int) << " bytes" << endl;
    cout << "long uses memory: " << sizeof(long) << " bytes" << endl;
    cout << "long long uses memory: " << sizeof(long long) << "bytes" << endl;
    
    return 0;
}