#include <iostream>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main()
{
    // Makes the variable constant
    const int a{7};

    // b remains a variable but it cannot be changed by defrencong
    int b{8}, test{20};
    const int *pointerTob{&b};

    b = 9; // will compile
    // *pointerTob = 9      will not compile
    pointerTob = &test;

    // c remains a variable but pointer becomes constant
    int c{10};
    int *const pointerToc{&c};

    c = 300;
    *pointerToc = 400;
    // c = &test        will not compile as pointer is constant

    // You can also make methods constant in a class by adding const at the end
    // eg. int getNumber() const;

    return 0;
}