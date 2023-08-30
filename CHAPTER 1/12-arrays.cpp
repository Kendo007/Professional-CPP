#include <iostream>
#include <array>
#include <format>
using namespace std;

int main() {
    // Old C-Style Arrays
    int myArray[] { 1, 2, 3, 4 };
    size_t arraySize {size(myArray)};

    cout << arraySize << endl;

    // New C++-Style Arrays
    array<int, 3> arr { 9, 8, 7 };     // also array arr { 9, 8, 7 };
    cout << format("Array size = {}", arr.size()) << endl;
    cout << format("2nd element = {}", arr[1]) << endl;
    
    array<int, 6> arr2 { 56, 67, 67, 89, 67 };
    cout << format("2nd element = {}", arr2[5]) << endl;

    return 0;
}