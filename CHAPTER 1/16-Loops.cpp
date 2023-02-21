#include <iostream>
#include <array>
#include <initializer_list>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

// Used for variable number of inputs
int total (initializer_list<int> li) {
    int sum {0};

    for (int i : li) {
        sum += i;
    }

    return sum;
}

int main() {
    int i { 0 };

    while (i < 5) {
        ++i;
        cout << "This is useless" << endl;
    }

    do {
        cout << "This is also useless" << endl;
        ++i;
    } while (i < 10);

    for (size_t j = 0; j < 5; ++j) {
        cout << "This is silly" << endl;
    }
    
    // For transversing arrays, vectors
    array arr {44,7,89,57};
    for (int j {0}; int i : arr) {
        cout << i << endl;
    }

    int result {total({83,82,22})};
    cout << format("Sum is: {}", result) << endl;

    return 0;
}