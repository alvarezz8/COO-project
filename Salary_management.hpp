#ifndef SALARY_MANAGEMENT_HPP
#define SALARY_MANAGEMENT_HPP

#include "Employee.hpp" 
using namespace std;
class SalaryManagement {
public:
  
    static void adjustSalary(Employee& employee, double newSalary);
};
#endif 

