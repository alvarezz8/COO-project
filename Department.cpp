#include "Department.hpp"
#include <iostream>
#include <algorithm>  // remove_if y find_if
#include <stdexcept>  // out_of_range

// function to add employees
void Department::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

// function to remove employees by ID
void Department::removeEmployee(int employeeID) {
    employees.erase(
        remove_if(employees.begin(), employees.end(),
                       [employeeID](const Employee& e) { return e.getID() == employeeID; }),
        employees.end());
}

//function for displaying employees
void Department::displayEmployees() const {
    for (const auto& employee : employees) {

        cout << "Name: " << employee.getName() << ", ID: " << employee.getID()
                  << ", Salary: " << employee.getSalary() << ", Position: " << employee.getPosition() << endl;
    }
}

// method to obtain an employee by ID
const Employee& Department::getEmployeeByID(int employeeID) const {
    auto it = find_if(employees.begin(), employees.end(),
                           [employeeID](const Employee& e) { return e.getID() == employeeID; });

    if (it != employees.end()) {
        return *it;
    } else {
        
        throw out_of_range("Employee with ID not found");
    }
}

// method of obtaining all employees
const vector<Employee>& Department::getAllEmployees() const {
    return employees;
}

