#include <iostream>
#include <format>
using namespace std;

void func(int i, int j) { /*   */ }

int main() {
    // Error when narrowing
    int a {3.14};
    func({3}, {3.78});

    return 0;
}