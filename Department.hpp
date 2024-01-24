#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP

#include <vector>
#include "Employee.hpp" 

using namespace std;
class Department {
public:
    // Functions for adding, deleting and displaying employees
    void addEmployee(const Employee& employee);
    void removeEmployee(int employeeID);
    void displayEmployees() const;

    // Methods of obtaining information on employees
    const Employee& getEmployeeByID(int employeeID) const;
    const vector<Employee>& getAllEmployees() const;

private:
    vector<Employee> employees;
};

#endif 

