#include <iostream>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    using IntPtr = int*;

    int x {56};
    IntPtr i {&x};

    cout << *i << endl;

    return 0;
}