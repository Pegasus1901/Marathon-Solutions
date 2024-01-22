#include "date.h"
#include<cstring>

Date::Date()
{
    day = 1;
    month = 1;
    year = 1;
    // std::cout<<"Date Constructor"<<std::endl;
}

void Date::accept()
{
    int d, m, y;

    std::cout << "Enter Month = " << std::endl;
    std::cin >> m;
    try
    {
        if (m > 0 && m <= 12)
        {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                
                try
                {
                        std::cout << "Enter Day = " << std::endl;
                        std::cin >> d;
                    if (d > 0 && d <= 31)
                    {
                        day = d;
                    }else
                    {
                        throw dateException("31st Date Out of bounds");
                    }
                }
                catch (dateException d)
                {
                    std::cout << d.what();
                }
            }else if(m==2)
            {
                    std::cout << "Enter Day = " << std::endl;
                    std::cin >> d;
                if (d > 0 && d <= 28)
                {
                    day = d;
                }else
                {
                    throw dateException("30th Date Out of bounds");
                }
            }else{
                    std::cout << "Enter Day = " << std::endl;
                    std::cin >> d;
                if (d > 0 && d <= 30)
                {
                    day = d;
                }else
                {
                    throw dateException("Date Out of bounds");
                }
            }
        }else{
            throw monthException("Invalid Month");
        }
    }
    catch (dateException m)
    {
        std::cout << m.what();
    }

    std::cout << "Enter Year = " << std::endl;
    std::cin >> y;
}

Date::~Date()
{
}

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

std::ostream &operator<<(std::ostream &out, Date &da)
{
    std::cout<<"Day = "<<da.getDay()<<std::endl;
    std::cout<<"Month = "<<da.getMonth()<<std::endl;
    std::cout<<"Year = "<<da.getYear()<<std::endl;
    return out;
}
