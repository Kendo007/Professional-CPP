#include <iostream>
#include <string>
#include <compare>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    char* a {"13"};
    char b[] {"123"};

    cout << (a == b) << endl;
    // Returns -ve, 0, +ve number of a is lesser, equal or greater than b
    cout << strcmp(a, b) << endl;

    // But C++ strings supports equality operators  
    string x {"Hello"};
    string y {"hello"};

    cout << (x == y) << endl;

    // We can also use Three way comparison <=> operator
    strong_ordering t { x <=> y};
    cout << is_lt(t) << endl;

    return 0;
}