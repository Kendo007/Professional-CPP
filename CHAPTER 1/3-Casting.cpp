#include <iostream>
#include <format>
using namespace std;

int main() {
    float myfloat {3.14f};

    int i { static_cast<int>(myfloat) };
    cout << i << endl;

    return 0;
}