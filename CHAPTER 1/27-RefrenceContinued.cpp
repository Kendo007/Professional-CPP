#include <iostream>
#include <utility>
#include <typeinfo>
#include <format>
using namespace std;

// Passing By refrence
void incrementBy (int& num, const int& by) {
    num += by;
}

int main() {
    pair myPair {78.6f, "hello"};

    auto [theInt, theString] {myPair};
    theInt = 67;
    theString = "yo";

    cout << format("{} {}", myPair.first, myPair.second) << endl;
    cout << format("{} {}", theInt, theString) << endl;

    // We can also use refrences
    auto& [theIntRef, theStringRef] {myPair};
    theIntRef = 90;
    theStringRef = "Yo Ho";

    cout << format("{} {}", myPair.first, myPair.second) << endl;
    cout << format("{} {}", theIntRef, theStringRef) << endl;

    int x { 56 };
    incrementBy(x, 4);
    cout << x << endl;

    return 0;
}