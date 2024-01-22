#ifndef HEADER02_H
#define HEADER02_H
#include <iostream>
#include <cstring>

class Student
{
    int rollno;
    char sname[20];
    int marks[3];

public:
    Student();
    Student(int, const char *, int[]);
    Student(Student &);
    int calculateAverageMarks();
    void accept();
    void display();

    ~Student();

    int getRollno() const;
    void setRollno(int rollno_);

    char getSname() const;
    void setSname(const char *sname_);

    int getMarks() const;
    void setMarks(int marks_);

    Student operator==(Student &sN)
    {
        if (sname == sN.sname)
        {
            std::cout << "They have same name" << std::endl;
        }
        else
        {
            std::cout << "They have different name" << std::endl;
        }
        return *this;
    }

    Student operator<(Student &sC)
    {
        if (this->calculateAverageMarks() < sC.calculateAverageMarks())
        {
            std::cout << this->sname << " Has Higher marks!!" << std::endl;
        }
        return *this;
    }

   friend void operator<<(std::ostream&cout, Student &s)
    {
        std::cout << "Roll Number = " << s.rollno << std::endl;
        std::cout << "Name = " << s.sname << std::endl;
        for (int i = 0; i < 3; i++)
        {
            std::cout << "Marks = " << s.marks[i] << std::endl;
        }

        
    }

    Student operator [](int n){
        for (int i = 0; i < 10; i++)
        {
            std::cout<<sname[n]<<"This is the char at "<<n<<std::endl;
            break;
        }
        
    }

};

#endif // HEADER02_H
