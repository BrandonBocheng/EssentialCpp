//
// Created by BochengHu on 2022/6/30.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    // 1. use cin to get input from the keyboard
    int a = 0;
    cout << "Please assign data to int variable: " << endl;
    cin >> a;
    cout << "The int variable value: " << a << endl;

    // 2. print float
    float float_num = 3.14f;
    cout << "Please assign data to float variable: " << endl;
    cin >> float_num;
    cout << "The float variable value: " << float_num << endl;

    // 3. char type
    char ch = 'a';
    cout << "Please assign data to char variable: " << endl;
    cin >> ch;
    cout << "The char variable value: " << ch << endl;

    // 4. string type
    string str = "hello";
    cout << "Please assign data to string variable: " << endl;
    cin >> str;
    cout << "The string variable value: " << str << endl;

    // 5. bool type
    bool flag = false;
    cout << "Please assign data to bool variable: " << endl;
    cin >> flag;
    cout << "The bool variable value: " << flag << endl;

    return 0;
}