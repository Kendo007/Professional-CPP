#include <iostream>
#include <format>
using namespace std;

consteval double inchtoMM(double inch) { return inch * 25.4; }

int main() {
    constexpr double const_inch { 8.0 };
    constexpr double mm1 { inchtoMM(const_inch) };

    // The given is not evaluated at compile time because dynamic_inch is not constexpr
    // Therefore to make sure it runs at compile time use consteval
    double dynamic_inch { 10.0 };
    // double mm2 { inchtoMM(dynamic_inch) };

    return 0;
}