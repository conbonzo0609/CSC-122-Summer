#include <string> 
#include <iostream>
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

public:

bool add();
bool findAddress(char *str1);
bool findName(char *str1);
bool findPhone(char *str1); 
bool findEmail(char *str1); 
bool print_chart();

};

inline void subMenu(){

    std:: cout << "\n1) find by Name\n2) find by Address" 
         << "\n3) find by Phone number\n4) find by Email address\n"
         << "5) Return to Main Menu\n"
         << "Enter your option []: \n"; 




}

inline void mainMenu(){
     

   std:: cout << "1) Add entry\n2) Edit entry\n3) Delete entry\n"
         << "4) Find entry\n5) Print all entries\n6) Quit\nEnter your option []: \n";

}




#endif