#include<iostream>
#include<cstring>

class dateException:public std::exception{
    char er[20];
    public:
        dateException(const char* c){
            strcpy(er,c);
        }
        const char * what(){
            return er;
        }
};
class monthException:public std::exception{
    char error[20];
    public:
        monthException(const char* c){
            strcpy(error,c);
        }
        const char * what(){
            return error;
        }
};


class Date{
    int day;
    int month;
    int year;

    public:
        Date();
        Date(int, int, int);
        void accept();
        friend std::ostream& operator<<(std::ostream&, Date&);
        ~Date();

        int getDay() const { return day; }
        void setDay(int day_) { day = day_; }

        int getMonth() const { return month; }
        void setMonth(int month_) { month = month_; }

        int getYear() const { return year; }
        void setYear(int year_) { year = year_; }
};