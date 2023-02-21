#include <iostream>
#include <string>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    // C++ Automatically allocates memory for strings
    string myString {"Hello"};
    myString += " World!";

    cout << myString << endl;

    return 0;
}