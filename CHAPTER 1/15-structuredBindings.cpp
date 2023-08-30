#include <iostream>
#include <format>
using namespace std;

int main() {
    struct Point { double m_x, m_y, m_z; };
    Point point;
    point.m_x = 1.7f; point.m_y = 2.0; point.m_z = 3.0;
    auto [x, y, z] { point };
    cout << format("x: {:.2f}\ny: {}\nz: {}", x, y, z) << endl;

    pair myPair { "hello", 5 };
    auto [theString, theInt] { myPair };  // Decompose using structured bindings.
    cout << format("theString: {}", theString) << endl;
    cout << format("theInt: {}", theInt) << endl;

    return 0;
}