#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee{
private:
    std::string _name;
    std::string _id;
    float _salary;
public:
   Employee(std::string name, std::string id, float salary);//PC
   virtual float CalculateBonus()=0;
   Employee()=delete;
   ~Employee()=default;
   Employee(const Employee&)=delete;
   Employee(Employee&&)=delete;

   std::string name() const { return _name; }

   std::string id() const { return _id; }

   float salary() const { return _salary; }

   friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
