﻿#include <iostream>
using namespace std;

int main()
{
    // !!!!!
    int a1 = 10;
    int b1 = 3;
    double result1 = a1 / b1;
    cout << result1 << endl; // 3

    int a2 = 10;
    double b2 = 3;
    double result2 = a2 / b2;
    cout << result2 << endl;; // 3.33333

    int a3 = 10;
    double b3 = 3;
    int result3 = a3 / b3;
    cout << result3 << endl;; // 3

    // Задача: Да се прочете цяло число от конзолата. Ако числото е четно, да се изведе 1 на стандартния изход. В противен случай, да се изведе 0.
    int number;
    cin >> number;
    cout << ((number % 2) == 0);
}