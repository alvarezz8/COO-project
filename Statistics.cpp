#include "Statistics.hpp"
using namespace std;
//function to calculate the average wage of employees
double Statistics::calculateAverageSalary(const vector<Employee>& employees) {
    
    if (employees.empty()) {
    	return 0.0;
    }

    double totalSalary = 0.0;
    for (const auto& employee : employees) {
        totalSalary += employee.getSalary();
    }

    return totalSalary / employees.size();
}

//function to obtain the total number of employees
int Statistics::getTotalEmployees(const vector<Employee>& employees) {
    return static_cast<int>(employees.size());
}

