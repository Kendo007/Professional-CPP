#ifndef _DATABASE_H_
#define _DATABASE_H_ 
#include <string>
#include <vector>
#include "Employee.hpp"

namespace HR {
    const int FirstEmployeeNumber {1'000};

    class Database {
        public:
            Employee& addEmployee (const std::string& firstName, const std::string& lastName, const bool shouldHire = true);
            Employee& getEmployee (int employeeNumber);
            Employee& getEmployee (const std::string& firstName, const std::string& lastName);

            void displayAll() const;
            void displayCurrent() const;
            void displayFormer() const;
        
        private:
            std::vector<Employee> m_employees;
            int m_nextEmployeeNumber {FirstEmployeeNumber};
    };
}

#endif