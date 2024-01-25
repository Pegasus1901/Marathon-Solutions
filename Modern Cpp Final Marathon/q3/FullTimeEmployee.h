#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include"Employee.h"
#include"Grade.h"
#include <ostream>

class FullTimeEmployee:public Employee
{
private:
    std::string _project_name;
    std::string _employee_location;
    Grade _grade;
    int _bonus_percentage;
public:
   FullTimeEmployee(std::string name, std::string _id, float salary, std::string projectName, std::string employeeLocation, Grade grade, int bonusPercentage);
   float CalculateBonus() override;
   FullTimeEmployee()=delete;
   ~FullTimeEmployee()=default;
   FullTimeEmployee(const FullTimeEmployee&)=delete;
   FullTimeEmployee(FullTimeEmployee&&)=delete;

   std::string projectName() const { return _project_name; }

   std::string employeeLocation() const { return _employee_location; }

   Grade grade() const { return _grade; }

   int bonusPercentage() const { return _bonus_percentage; }

   friend std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs);
};

#endif // FULLTIMEEMPLOYEE_H
