#include <iostream>
#include <limits>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<double>::lowest() << endl;

    return 0;
}