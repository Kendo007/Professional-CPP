#include <iostream>
#include <array>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    int arraysize;
    cin >> arraysize;

    int *DynamicArray {new int[arraysize]};   // Dynamically allocating array
    for (int i {0}; i < arraysize; ++i) {
        cout << "Enter Number: ";
        cin >> DynamicArray[i];
    }

    for (int i {0}; i < arraysize; ++i) {
        cout << DynamicArray[i] << endl;
    }

    delete[] DynamicArray;     // Freeing Allocated memory
    DynamicArray = nullptr;

    return 0;
}