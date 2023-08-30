#include <iostream>
#include <format>
using namespace std;

int main() {
    cout << format("Hello, {}!", "world") << endl;

    return 0;
}