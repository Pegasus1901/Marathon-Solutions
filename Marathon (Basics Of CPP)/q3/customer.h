#include<iostream>
#include<cstring>

class lengthException:public std::exception{
    char err[20];
    public:
        lengthException(const char* c){
            strcpy(err,c);
        }
        const char * what(){
            return err;
        }
};

class Customer
{
private:
    char *customername;
public:
    Customer();
    Customer(const char*);
    Customer(Customer&);
    void accept();
    friend std::ostream& operator<<(std::ostream&, Customer&);
    ~Customer();

    char* getCustomername() const { return customername; }
    void setCustomername(const char *customername_) { strcpy(customername,customername_); }
};

