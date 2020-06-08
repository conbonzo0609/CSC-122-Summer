#include <string>
#ifndef Month_H
#define Month_H

class Month
{

    int myMonth; 

public: 
Month(){
    myMonth = 0;
}

    bool set_month();

    std:: string get_month();

    bool advance();

    bool retreat();


};

#endif