#include <iostream>
#include <format>
using namespace std;

int main() {
    struct Employee {     
        char firstInitial;
        char lastInitial;
        int  employeeNumber;
        int  salary { 75'000 };
    };

    Employee anEmployee {
        .firstInitial {'J'},
        .salary { 80'000 }
    };

    cout << anEmployee.firstInitial << endl;
    cout << anEmployee.salary << endl;

    return 0;
}