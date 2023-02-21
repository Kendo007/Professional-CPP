#include <iostream>
#include <typeinfo>
#include <string>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

const string& message {"Hello"};

const string& foo() { return message; }

int main() {
    // The difference between decltype and auto is that 
    // it does not take away const and refrence 
    int x {6};
    decltype(x) y {78};

    decltype(foo()) z {foo()};
    cout << typeid(z).name() << endl;

    return 0;
}