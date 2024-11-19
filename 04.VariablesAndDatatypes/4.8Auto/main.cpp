#include <iostream>

using namespace std;

int main() {
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    // int modifier suffixes
    auto var6 {12u};
    auto var7 {12ul};
    auto var8 {12ll};

    cout << "var1 occcupies : " << sizeof(var1) << "bytes\n";
    cout << "var2 occcupies : " << sizeof(var2) << "bytes\n";
    cout << "var3 occcupies : " << sizeof(var3) << "bytes\n";
    cout << "var4 occcupies : " << sizeof(var4) << "bytes\n";
    cout << "var5 occcupies : " << sizeof(var5) << "bytes\n";
    cout << "var6 occcupies : " << sizeof(var6) << "bytes\n";
    cout << "var7 occcupies : " << sizeof(var7) << "bytes\n";
    cout << "var8 occcupies : " << sizeof(var8) << "bytes\n";
}