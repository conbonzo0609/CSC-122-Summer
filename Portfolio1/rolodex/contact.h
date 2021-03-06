#include <string> 
#include <iostream>
#ifndef Contact_H
#define Contact_H

const size_t MAX_NAME = 46,
             MAX_STREET = 35,
             MAX_TOWN = 28,
             MAX_STATE = 10,
             MAX_EMAIL = 65,
             MAX_PHONE = 14;


class Contact
{
    char fname[MAX_NAME], lname[MAX_NAME];  
    char street[MAX_STREET], town[MAX_TOWN], state[MAX_STATE];
    long zip;
    char phone[MAX_PHONE];
    char email[MAX_EMAIL];

public:



    void add();
    void editName();
    void editAddress();
    void editPhone();
    void editEmail();
    void empty();
    void print_chart();
    bool validEntry();
    int lookEmail(char c[]);
    int lookPhone(char c[]);
    int lookfirstName(char c[]);
    int looklastName(char c[]);
    int lookhouseNumber(char c[]);
    int lookzip(long zipcode);
    int looktown(char c[]);
    int lookstate(char c[]);
    const char * getData();

};

inline void subMenu(){

    std:: cout << "\n1) find by First Name\n2) find by Last Name\n" 
         << "3) find by House Address\n4) find by Zip Code\n5) find by Town\n"
         << "6) find by State \n7) find by Phone Number\n8) find by Email Address\n"
         << "9) Return to Main Menu\n"
         << "Enter your option []: \n"; 




}

inline void editMenu(){

    std :: cout << "\n1) Edit Name\n2) Edit Street"
                << "\n3) Edit Phone Number\n4) Edit Email\n" 
                << "5) Return to Main Menu\n"
                << "Enter your option []: \n";


}

inline void mainMenu(){
     

   std:: cout << "1) Add entry\n2) Edit entry\n3) Delete entry\n"
         << "4) Find entry\n5) Print all entries\n6) Save\n8) Exit\nEnter your option []: \n";

}






#endif