#include <iostream>
#include <optional>
#include <format>
using namespace std;

optional<int> getData (bool wantIt) {
    if (wantIt) {
        return 42;
    }

    return {};
}

int main() {
    optional<int> data1 { getData(true) };
    optional<int> data2 { getData(false) };

    // To know if data1 has a value use method has_value or if/else statement
    cout << "data1.has_value = " << data1.has_value() << endl;
    if (data2) {     
        cout << "data2 has a value." << endl;
    }

    // To get the value use method value or * operator
    cout << "data1.value = " << data1.value() << endl;
    cout << "data1.value = " << *data1 << endl;

    // value_or method can be used if optional is empty and you want some other value
    cout << "data2.value = " << data2.value_or(8.8) << endl;

    return 0;
}