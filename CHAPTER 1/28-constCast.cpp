#include <iostream>
#include <utility>
#include <format>
using namespace std;

void increment(int i) {
    cout << i << endl;
}

int main() {
    // const_cast() is used to take away or give constness
    // but it will not actually take away thw constnese
    const int x { 44 };
    increment(const_cast<int&>(x));
    cout << x << endl;

    string str { "C++" };
    const string& constStr { as_const(str) };

    return 0;
}