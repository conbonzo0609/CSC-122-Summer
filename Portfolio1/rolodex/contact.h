#include <string> 

#ifndef Contact_H
#define Contact_H

const size_t MAX_NAME = 46,
             MAX_STREET = 35,
             MAX_TOWN = 28,
             MAX_STATE = 3,
             MAX_PHONE = 14;


class Contact
{
    char fname[MAX_NAME], lname[MAX_NAME];  
    char street[MAX_STREET], town[MAX_TOWN], state[MAX_STATE];
    long zip;
    short zip_4;
    char phone[MAX_PHONE];



};


#endif