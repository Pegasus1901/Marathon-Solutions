#ifndef DEVELOPER_H
#define DEVELOPER_H

#include<iostream>
#include<vector>

#include"SkillSet.h"

class Developer{
private:
    std::string _id;
    std::string _name;
    float _salary;
    int _experience_years;
    std::vector<SkillSet> _skill;
public:
   Developer(std::string id,std::string name,float salary,int experienceyears,std::vector<SkillSet> skill);//PC
   float CalculateBonus();
   Developer()=delete;
   ~Developer()=default;
   Developer(const Developer&)=delete;
   Developer(Developer&&)=delete;
   Developer operator=(const Developer&)=delete;
   Developer operator=(Developer&&)=delete;

   std::string id() const { return _id; }

   std::string name() const { return _name; }

   float salary() const { return _salary; }

   int experienceYears() const { return _experience_years; }

   std::vector<SkillSet> skill() const { return _skill; }

   friend std::ostream &operator<<(std::ostream &os, const Developer &rhs);
};

#endif // DEVELOPER_H
