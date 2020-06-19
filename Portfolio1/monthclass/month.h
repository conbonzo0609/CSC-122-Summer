#include <string>
#ifndef Month_H
#define Month_H

class Month
{

    int myMonth; 

public: 
    Month(int i = 0){
        myMonth = i; 
    }

    bool set_month();

    std:: string get_month();

    bool advance();

    bool retreat();


};

#endif