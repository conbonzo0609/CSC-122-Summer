 #include "contact.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std; 

bool Contact :: add(){
cin.clear();
cin.ignore(std::numeric_limits<int>::max(),'\n');

cout << "Firstname: \n";
cin.getline(fname, sizeof(fname), '\n'); 

cout << "Lastname: \n"; 
cin.getline(lname, sizeof(lname), '\n');

cout << "Street: \n"; 
cin.getline(street, sizeof(street), '\n');

cout << "Town: \n";
cin.getline(town, sizeof(town), '\n');

cout << "ZIP: \n"; 
cin >> zip;
cin.ignore(std::numeric_limits<int>::max(),'\n');

cout << "Phone: \n";
cin.getline(phone, sizeof(phone), '\n');

return true; 

   

}

bool Contact :: findAddress(char *str1){

        

}

bool Contact :: findName(char *str1){

    if(str1 == fname)
        return true; 

}

bool Contact :: findPhone(char *str1){



}

bool Contact :: findEmail(char *str1){



}

bool Contact :: print_chart(){

    cout << " Name        |    phonenumber     |     street      |     town           |   zip   |   state  |   "
         << "\n-------------+--------------------+-----------------+---------------+-------+-----------+---------\n"
         << fname
         << " "
         << lname
         << std::setw(15)
         << phone
         << std::setw(19)
         << street
         << std::setw(27)
         << town
         << std::setw(11)
         << zip 
         << std:: setw(8)
         << state
         << endl;

    return true; 



}





