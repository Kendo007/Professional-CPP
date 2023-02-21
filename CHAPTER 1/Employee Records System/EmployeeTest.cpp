#include <iostream>
#include "Employee.hpp"
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;
using namespace HR;

int main() {
    cout << "Testing The Employee Class:-" << endl;
    Employee emp { "Jane", "Doe" };
    emp.display();

    emp.setFirstName("John");
    emp.setLastName("Dame");
    emp.setEmployeeNumber(71);
    emp.setSalary(50'000);
    emp.promote();
    emp.promote(5000);

    emp.display();
    emp.demote();
    emp.demote(5000);

    emp.hire();
    emp.setPos(Position::SeniorEngineer);
    emp.display();

    return 0;
}