#include "Database.hpp"
#include <stdexcept>

namespace HR {
    Employee& Database::addEmployee(const std::string& firstName, const std::string& lastName, const bool shouldHire) {
        Employee theEmployee {firstName, lastName};
        theEmployee.setEmployeeNumber(m_nextEmployeeNumber++);
        if (shouldHire)
            theEmployee.hire();
        m_employees.push_back(theEmployee);

        return m_employees.back();
    }

    Employee& Database::getEmployee(int employeeNumber) {
        for (auto& employee : m_employees) {
            if (employeeNumber == employee.getEmployeeNumber()) {
                return employee;
            }
        }
        throw std::logic_error ("No employee Found!");
    }

    Employee& Database::getEmployee (const std::string& firstName, const std::string& lastName) {
        for (auto& employee : m_employees) {
            if (employee.getFirstName() == firstName && employee.getLastName() == lastName) {
                return employee;
            }
        }
        throw std::logic_error ("No employee Found!");
    }

    void Database::displayAll() const {
        for (const auto& employee : m_employees) {
            employee.display();
        }
    }

    void Database::displayCurrent() const {
        for (const auto& employee : m_employees) {
            if (employee.isHired()) {
                employee.display();
            }
        }
    }

    void Database::displayFormer() const {
        for (const auto& employee : m_employees) {
            if (!employee.isHired()) {
                employee.display();
            }
        }
    }
}