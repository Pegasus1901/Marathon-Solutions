#include "conversion.h"
#include<cstring>

class indexexception:public std::exception{
    char er[20];
    public:
        indexexception(const char* c){
            strcpy(er,c);
        }
        const char * what(){
            return er;
        }
}

Conversion::Conversion()
{
    xDistance = 0;
    yDistance = 0;
}

Conversion::Conversion(Conversion &c)
{
    xDistance = c.getXDistance();
    yDistance = c.getYDistance();

    for (int i = 0; i < 5; i++)
    {
        arr[i] = c.arr[i];
    }
}

Conversion::Conversion(float a, float b, int *c) : xDistance(a), yDistance(b)
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = c[i];
    }
}

Conversion Conversion::operator+(int x)
{
    Conversion ref;
    ref.xDistance += x;
    ref.yDistance += x;

    for (int i = 0; i < 5; i++)
    {
        arr[i] += x;
    }

    return ref;
}

Conversion Conversion::operator++()
{
    ++xDistance;
    ++yDistance;
    return *this;
}

Conversion Conversion::operator++(int)
{
    this->xDistance++;
    this->yDistance++;
    return *this;
}
Conversion Conversion::operator--()
{
    --xDistance;
    --yDistance;
    return *this;
}

Conversion Conversion::operator--(int)
{
    this->xDistance--;
    this->yDistance--;
    return *this;
}

Conversion::~Conversion()
{
}

void Conversion::display()
{
    std::cout << "X-Direction is" << xDistance << std::endl;
    std::cout << "Y-Direction is" << yDistance << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Array elements " << arr[i] << std::endl;
    }
}

Conversion operator+(int x, Conversion &cs)
{
    cs.xDistance += x;
    cs.yDistance += x;
    return cs;
}

bool Conversion::operator==(Conversion &cd)
{
    if (xDistance == cd.xDistance && yDistance == cd.yDistance)
    {
        return false;
    }

    return true;
}

float Conversion::operator[](int index)
{
    // std::cout << "Value at index " << index << " is " <<  << std::endl;
    try
    {
        if (index < 5)
        {
            return (float)arr[index] / 100;
        }
        throw indexexception("Enter valid index");
    }
    catch (indexexception e)
    {
        std::cout<<e.what();
        return 0;
    }
}
float Conversion::operator()(Conversion &op)
{
    float avg = 0, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += op.arr[i];
    }
    avg = sum / 5;

    return avg;
}
