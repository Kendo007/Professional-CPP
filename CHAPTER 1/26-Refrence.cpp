#include <iostream>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    // You must initialise a ref and it cannot change
    int x { 3 };
    int &refTox {x};
    cout << format("x: {}\nrefTox: {}", x, refTox) << endl;

    x = 10;
    cout << format("x: {}\nrefTox: {}", x, refTox) << endl;

    refTox = 20;
    cout << format("x: {}\nrefTox: {}", x, refTox) << endl;

    // A const will have no effect on original variable
    int z { 4 };
    const int& refToz { z };
    const int& refToliteral { 5 };

    z = 9;
    // refToz = 10;      Gives Error

    return 0;
}