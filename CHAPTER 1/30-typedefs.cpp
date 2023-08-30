#include <iostream>
#include <format>
using namespace std;

int main() {
    using IntPtr = int*;

    int x {56};
    IntPtr i {&x};

    cout << *i << endl;

    return 0;
}