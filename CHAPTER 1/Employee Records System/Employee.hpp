#ifndef _EMPLOYEE_RECORDS_H
#define _EMPLOYEE_RECORDS_H
#include <string>

namespace HR {
    const int DefaultStartingSalary {30'000}; 
    const int DefaultRaiseAndDemeritAmount {1'000};
    enum class Position { Manager, Engineer, SeniorEngineer };

    class Employee
    {
    private:
        std::string m_firstName;
        std::string m_lastName;
        int m_employeeNumber { -1 };
        int m_salary { DefaultStartingSalary };
        Position m_currentPosition {Position::Engineer};
        bool m_hired { false };
    public:
        Employee (const std::string firstName, const std::string lastName);
        void promote (int raiseAmount = DefaultRaiseAndDemeritAmount);
        void demote (int demeritAmount = DefaultRaiseAndDemeritAmount);
        void hire();
        void fire();
        void display() const;

        void setFirstName (const std::string& firstName);
        const std::string& getFirstName() const;

        void setLastName (const std::string& lastName);
        const std::string& getLastName() const;

        void setEmployeeNumber(int employeeNumber);
        int getEmployeeNumber() const;

        void setSalary (int newSalary);
        int getSalary() const;

        void setPos(Position i);
        void setPos(int i);
        const std::string getPos() const;

        bool isHired() const;
    };
}

#endif