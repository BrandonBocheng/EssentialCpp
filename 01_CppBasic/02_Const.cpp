//
// Created by BochengHu on 2022/6/16.
//

// There are two ways to define the constant
// 1. macro constant
// 2. use const keyword to qualify variable

#include <iostream>
using namespace std;

#define DAY_IN_WEEK 7

int main() {

    cout << "一周总共有" << DAY_IN_WEEK << "days" << endl;

    // const modify variable
    const int month  = 12;
    // month = 13; // error, qualifier const specify the variable cannot be modified
    cout << "一年有" << month << "个月份" << endl;

    return 0;
}