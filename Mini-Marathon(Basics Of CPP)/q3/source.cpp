#include "header02.h"
#include <cstring>
#include <iostream>

Student::Student()
{
    rollno = 0;
    strcpy(sname, "Empty");
    for (int i = 0; i <= 3; i++)
    {
        marks[i] = 0;
    }
}

Student::Student(int r, const char *name, int arr[])
{
    rollno = r;
    strcpy(sname, name);
    for (int i = 0; i <= 3; i++)
    {
        marks[i] = arr[i];
    }
}

Student::Student(Student &stu)
{
    rollno = stu.rollno;
    strcpy(sname, stu.sname);
    for (int i = 0; i < 3; i++)
    {
        marks[i] = stu.marks[i];
    }
}

int Student::calculateAverageMarks()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += marks[i];
    }
    int avg;
    avg=sum/3;

    return avg;
}

void Student::accept()
{
    std::cout << "Enter Roll No - " << std::endl;
    std::cin >> rollno;
    std::cout << "Enter name - " << std::endl;
    char newName[20];
    std::cin >> newName;
    strcpy(sname, newName);
    std::cout << "Enter marks - " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter Subject " << i << " Marks" << std::endl;
        std::cin >> marks[i];
    }
}

void Student::display()
{
    std::cout << "Roll Number = " << rollno << std::endl;
    std::cout << "Name = " << sname << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Marks = " << marks[i] << std::endl;
    }
}

Student::~Student()
{
}

int Student::getRollno() const
{
    return 0;
}

void Student::setRollno(int rollno_)
{
    rollno=rollno_;
}

char Student::getSname() const
{
    return 0;
}

void Student::setSname(const char *sname_)
{
    strcpy(sname,sname_);
}

int Student::getMarks() const
{
    return 0;
}

void Student::setMarks(int marks_)
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter Subject " << i << " Marks" << std::endl;
        std::cin >> marks[i];
    }
}

