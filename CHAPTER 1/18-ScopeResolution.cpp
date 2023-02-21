#include <iostream>
#include "/root/CPPMasterclass/Professional C++/format"

class Demo
{
    public:
        int get() { return 5; }
};

int get() { return 10; }

namespace NS {
    int get() { return 20; }
}

int main() {
    Demo d;

    std::cout << d.get() << std::endl;
    std::cout << NS::get() << std::endl;
    std::cout << ::get() << std::endl;
    std::cout << get() << std::endl;

    return 0;
}