#include "Employee.hpp"
#include <string>
#include <iostream>

namespace HR {
    Employee::Employee (const std::string firstName, const std::string lastName) 
    : m_firstName {firstName}, m_lastName {lastName}
    {}

    void Employee::promote (int raiseAmount) {
        setSalary (getSalary() + raiseAmount);
    }

    void Employee::demote (int demeritAmount) {
        if (demeritAmount <= getSalary()) {
            setSalary (getSalary() - demeritAmount);
        }
    }

    void Employee::hire() {
        m_currentPosition = Position::Engineer;
        m_hired = true;
    }

    void Employee::fire() {
        m_hired = false;
    }

    void Employee::display() const {
        using namespace std;

        cout << "Employee: " << getFirstName() << " " << getLastName() << endl;
        cout << "-------------------------" << endl;
        cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
        cout << "Current Position: " << getPos() << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Salary: $" << getSalary() << endl;
        cout << endl;
    }

    void Employee::setFirstName (const std::string& firstName){
        m_firstName = firstName;
    }

    const std::string& Employee::getFirstName() const {
        return m_firstName;
    }

    void Employee::setLastName (const std::string& lastName) {
        m_lastName = lastName;
    }

    const std::string& Employee::getLastName() const {
        return m_lastName;
    }

    void Employee::setEmployeeNumber(int employeeNumber) {
        m_employeeNumber = employeeNumber;
    }

    int Employee::getEmployeeNumber() const {
        return m_employeeNumber;
    }

    void Employee::setSalary (int newSalary) {
        m_salary = newSalary;
    }

    int Employee::getSalary() const {
        return m_salary;
    }

    bool Employee::isHired() const {
        return m_hired;
    }

    void Employee::setPos(Position i) {
        m_currentPosition = i;
    }

    void Employee::setPos(int i) {
        m_currentPosition = static_cast<Position>(i);
    }

    const std::string Employee::getPos() const {
        using enum Position;
        std::string x;

        if (!isHired()) {
            return "Fired";
        }

        switch (m_currentPosition)
        {
        case Engineer:
            x = "Engineer";
            break;
        case SeniorEngineer:
            x = "Senior Engineer";
            break;
        case Manager:
            x = "Manager";
            break;
        default:
            break;
        }

        return x;
    }
} 