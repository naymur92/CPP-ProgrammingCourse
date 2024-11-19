#include <iostream>

using namespace std;

int main() {
    bool status {false};
    bool is_sleep {true};

    cout << status << "\n";
    cout << is_sleep << "\n";

    cout << "size of bool is : " << sizeof(status) << " byte\n";

    cout << boolalpha;
    cout << status << "\n";
}