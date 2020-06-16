#include <string> 
#include <iostream>
#ifndef Contact_H
#define Contact_H

const size_t MAX_NAME = 46,
             MAX_STREET = 35,
             MAX_TOWN = 28,
             MAX_STATE = 3,
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



bool add();
bool validEntry();
void editName();
void getName();
void editAddress();
void editPhone();
void editEmail();
void empty();
int lookEmail(char c[]);
int lookPhone(char c[]);
int firstName(char c[]);
int lastName(char c[]);
int houseNumber(char c[]);
int lookzip(long zip);
int looktown(char c[]);
int lookstate(char c[]);


// bool findAddress(char *str1);
// bool findName(char *str1);
// bool findPhone(char *str1); 
// bool findEmail(char *str1); 
void print_chart();

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
         << "4) Find entry\n5) Print all entries\n6) Quit\nEnter your option []: \n";

}






#endif