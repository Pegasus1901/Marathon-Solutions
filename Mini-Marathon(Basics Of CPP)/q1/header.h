#ifndef HEADER_H
#define HEADER_H

enum ElectricitySlabs{E1=125,E2=150,E3=200};

//class Electricity
class Electricity{

    int sanctionLoad;
    ElectricitySlabs slabs;
    long int presentReading;
    long int previousReading;


public:
    //class member functions
    Electricity();  //Default Constructor
    void accept();
    void display();
    int calculateElectricityBill();
    ~Electricity(); //Destructor


    //Gettrs and setters for class variables
    int getSanctionLoad() const;
    void setSanctionLoad(int sanctionLoad_);

    ElectricitySlabs getSlabs() const;
    void setSlabs(const ElectricitySlabs &slabs_);

    long int getPresentReading() const;
    void setPresentReading(long int presentReading_);

    long int getPreviousReading() const;
    void setPreviousReading(long int previousReading_);

    long int getPresentReading() const { return presentReading; }
    void setPresentReading(long int presentReading_) { presentReading = presentReading_; }
    
};

#endif // HEADER_H
