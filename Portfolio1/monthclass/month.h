#include <string>
#ifndef Month_H
#define Month_H

class Month
{

int myMonth; 

public: 

bool set_month();

std:: string get_month();

bool advance(int);

bool retreat(int);


};

#endif