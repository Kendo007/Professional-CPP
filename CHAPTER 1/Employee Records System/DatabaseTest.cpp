#include <iostream>
#include "Database.hpp"
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;
using namespace HR;

int main() {
    Database myDB;
    Employee& emp1 { myDB.addEmployee("Greg", "Wallis", false) };

    Employee& emp2 { myDB.addEmployee("Marc", "White") };
    emp2.setSalary(100'000);

    Employee& emp3 { myDB.addEmployee("John", "Doe") };
    emp3.setSalary(10'000);
    emp3.promote();

    cout << "all employees: " << endl << endl;
    myDB.displayAll();
         
    cout << endl << "current employees: " << endl << endl;
    myDB.displayCurrent();
                  
    cout << endl << "former employees: " << endl << endl;
    myDB.displayFormer();

    return 0;
}