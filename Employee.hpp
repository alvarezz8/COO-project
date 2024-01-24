#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
using namespace std;
class Employee {
public:
    // constructor
    Employee(const string& name, int id, double salary, const string& position);

    const string& getName() const;
    int getID() const;
    double getSalary() const;
    const string& getPosition() const;

    void adjustSalary(double newSalary);

private:
    string name;
    int id;
    double salary;
    string position;
};

#endif

