#include <iostream>
#include <format>
using namespace std;

auto addNumbers (auto a, auto b) {
    cout << format("Entering Function: {}", __func__) << endl;
    return a + b;
}

int main() {
    auto result { addNumbers(4, 7.0L) };
    auto result2 { addNumbers(4.8f, 3.9) };

    cout << result << endl;
    cout << result2 << endl;

    return 0;
}