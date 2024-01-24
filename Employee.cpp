#include "Employee.hpp"
#include <iostream>
using namespace std;

//constructor
Employee::Employee(const string& name, int id, double salary, const string& position)
    : name(name), id(id), salary(salary), position(position) {}

// access methods
const string& Employee::getName() const {
  return name;
}

int Employee::getID() const {
  return id; 
}

double Employee::getSalary() const {
  return salary; 
}

const string& Employee::getPosition() const {
  return position; 
}
	
// method for adjusting the wage
void Employee::adjustSalary(double newSalary) {
    if (newSalary > 0) {
        salary = newSalary;
    } else {
        cout << "Error: New salary must be greater than 0.\n";
    }
}

