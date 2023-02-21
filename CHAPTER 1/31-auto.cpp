#include <iostream>
#include <typeinfo>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

const string& message { "Hello" };

// Using auto will remove const and refrence from it
// It will always return a copy
const string& foo() { return message; }

int main() {
    auto a { 3 };
    auto test { foo() };

    // Therefore use const auto&
    const auto& test2 { foo() };

    // Use auto* instead of auto for pointers
    auto* p {&a};
    const auto* p1 {&test};         // pointer-to-const
    auto* const p2 {&test2};        // constpointer-to-variable

    auto x = { 21 };            //Initialiser_list<int>
    auto y = { 21, 56 };        //Initialiser_list<int>

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;

    return 0;
}