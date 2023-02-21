#include <iostream>
#include <stdexcept>
#include <exception>
#include <string>
#include "Database.hpp"
#include "Employee.hpp"
using namespace std;
using namespace HR;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);

int main() {
    Database employeeDB;
    bool done {false};
    while (!done) {
        int selection {displayMenu()};
        switch (selection) {
            case 0:
                done = true;
                break;
            case 1:
                doHire(employeeDB);
                break;
            case 2:
                doFire(employeeDB);
                break;
            case 3:
                doPromote(employeeDB);
                break;
            case 4:
                employeeDB.displayAll();
                break;
            case 5:
                employeeDB.displayCurrent();
                break;
            case 6:
                employeeDB.displayFormer();
                break;
            default:
                std::cerr << "Unknown command." << std::endl;
                break;
        }
    }

    return 0;
}

int displayMenu() {   
    using namespace std;  
    int selection;
    cout << endl;
    cout << "Employee Database" << endl;
    cout << "-----------------" << endl;
    cout << "1) Hire a new employee" << endl;
    cout << "2) Fire an employee" << endl;
    cout << "3) Raise an employee" << endl;
    cout << "4) List all employees" << endl;
    cout << "5) List all current employees" << endl;
    cout << "6) List all former employees" << endl;
    cout << "0) Quit" << endl;
    cout << endl;
    cout << "---> ";
    cin >> selection;
    
    return selection;
}

void doHire(Database& db) {
    using namespace std;

    string firstName;
    cout << "First Name?\n> ";
    cin >> firstName;

    string lastName;
    cout << "Last Name?\n> ";
    cin >> lastName; 

    auto& employee {db.addEmployee(firstName, lastName)};
    cout << "Hired Employee " << firstName << " " << lastName << " with employee number " << employee.getEmployeeNumber() << endl;
}

void doFire(Database& db) {
    using namespace std;

    int employeeNumber;
    cout << "Employee Number?\n> ";
    cin >> employeeNumber;

    try {
        auto& emp {db.getEmployee(employeeNumber)};
        emp.fire();
        cout << "Employee " << employeeNumber << " terminated." << endl;
    } catch (const std::logic_error& exception) {
        cerr << "Unable to terminate employee: " << exception.what() << endl;
    }
}

void doPromote (Database& db) {
    using namespace std;

    int employeeNumber;
    cout << "Employee Number?\n> ";
    cin >> employeeNumber;

    int raiseAmount;
    cout << "How much to raise?\n> ";
    cin >> raiseAmount;

    try {
        auto& emp {db.getEmployee(employeeNumber)};
        emp.promote(raiseAmount);
    } catch (const std::logic_error exception) {
        cerr << "Unable to promote employe: " << exception.what() << endl;
    }
}