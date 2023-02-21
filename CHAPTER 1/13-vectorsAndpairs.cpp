#include <iostream>
#include <vector>
#include <utility>  // For Pairs
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    // Vectors
    vector<int> myVector {};  // vector myVector {something}
    myVector.push_back(44);
    myVector.push_back(78);

    cout << myVector [1] << endl;

    // Pairs
    pair<int, float> myPair { 5, 7.5 };     // pair myPair {5, 7.5}
    cout << format("{} {}", myPair.first, myPair.second) << endl;

    return 0;
}