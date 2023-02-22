#include <iostream>
#include <string>
#include <vector>
#include "K:\Coding\C++\format"
using namespace std;

int main() {
    auto string1 {"Hello"};       // type as const char*
    auto string2 {"Hello"s};      // type as string literal

    // Same for vectors
    vector names {"John", "Sam", "Joe"};         // type as vector<const char*>
    vector names2 {"John"s, "Sam"s, "Joe"s};     // type as vector<string>
    vector<string> names3 {"Ram", "Rohit", "Karan"};         // or use this if you don't want to use s

    return 0;
}