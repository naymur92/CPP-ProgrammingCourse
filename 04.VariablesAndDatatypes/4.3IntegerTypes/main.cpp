#include <iostream>

using namespace std;

int main() {
    /*
    There are 3 types of variable initializer
    1. Assignment initialization
    2. Functional initialization
    3. Braced initialization
    */
    int num;
    int num1 = 0;
    int num2 {};
    int num3 {10};

    int sum1 {num + num2};
    int sum2 {num1 + num3};

    int num4 (0);
    int num5 (4);
    int sum3 (num4 + num5);

    cout << "Sum1 = " << sum1 << "\n";
    cout << "Sum2 = " << sum2 << "\n";
    cout << "Sum3 = " << sum3 << "\n";

    cout << "Size of num1 = " << sizeof(num1) << "\n";
    cout << "Size of num2 = " << sizeof(num2) << "\n";
    cout << "Size of num3 = " << sizeof(num3) << "\n";
    cout << "Size of num4 = " << sizeof(num4) << "\n";
}