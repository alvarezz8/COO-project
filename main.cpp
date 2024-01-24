#include <iostream>
#include "Employee.hpp"
#include "Department.hpp"
#include "Salary_management.hpp"
#include "Statistics.hpp"
using namespace std;

int main() {
    Department IADepartment;

    IADepartment.addEmployee(Employee("Mario Alvarez", 1, 50000.0, "Executive"));
    IADepartment.addEmployee(Employee("Miguel Diaz", 2, 40000.0, "Programmer"));
    IADepartment.addEmployee(Employee("Ana sanchez", 3, 45000.0, "Programmer"));

    cout << "Employees in IA Department:\n";
    IADepartment.displayEmployees();

    //  adjusting an employee's salary
    Employee& MarioAlvarez = const_cast<Employee&>(IADepartment.getEmployeeByID(1));
    SalaryManagement::adjustSalary(MarioAlvarez, 55000.0);

    //show employees after wage adjustment
    cout << "\nEmployees in IA Department after salary adjustment:\n";
    IADepartment.displayEmployees();

    // calculate and display general statistics
    vector<Employee> allEmployees = IADepartment.getAllEmployees();
    cout << "\nGeneral Statistics:\n";
    cout << "Average Salary: " << Statistics::calculateAverageSalary(allEmployees) << endl;
    cout << "Total Employees: " << Statistics::getTotalEmployees(allEmployees) << endl;

    return 0;
}

