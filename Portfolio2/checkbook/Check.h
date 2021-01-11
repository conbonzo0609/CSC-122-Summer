#ifndef Check_H
#define Check_H

class Check
{
private:
    long checkNumber;
    double checkAmount;
    bool checkCashed; 
public:
    Check();


    void deposit(double CheckAmount);
    void withdraw(long checkN, double checkA, bool checkC);
    long getCheckNumber();
    double getCheckAmount();
    bool getCheckCashed();
    void cashCheck();



};


///kevin


bool getRand();






#endif



