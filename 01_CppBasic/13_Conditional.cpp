//
// Created by BochengHu on 2022/7/9.
//

#include <iostream>
using namespace std;

int main() {
    // 1, Use the if else
    cout << "Use the if else conditional grammer" << endl;
    int score = 0;
    cout << "Please input your scores:" << endl;
    cin >> score;
    if (score > 600) {
        cout << "Congradulation! You can go to 985" << endl;

        if (score > 700) {
            cout << "You can go to TsingHua" << endl;
        } else if (score > 650) {
            cout << "You can go to Peking" << endl;
        } else {
            cout << "You can go to other 985" << endl;
        }
    } else if (score > 500) {
        cout << "You can go to 211" << endl;
    } else {
        cout << "Oops, your need improve your knowledge" << endl;
    }

    // 2. The trinomial operator
    int num1 = 0;
    int num2 = 10;
    int num3 = 20;
    (num1 < num2 ? num1 : num2) = 100;
    cout << "num1: " << num1 << endl; // 100
    

    //3. switch-case
    return 0;
}