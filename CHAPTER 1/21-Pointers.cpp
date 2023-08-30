#include <iostream>
#include <format>
using namespace std;

int main() {
    int num { 5 };
    int *aNumber, *aPointer;
    
    aPointer = &num;
    aNumber = new int;  // Dynamically allocating memory in free store

    *aNumber = 8;
    cout << format("Normal Pointer: {}\nDynamic Memory Pointer: {}", *aPointer, *aNumber) << endl;

    delete aNumber;    // Deleting allocated memory
    aNumber = nullptr;

    return 0;
}