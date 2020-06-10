 #include "contact.h"
#include <string>
#include <iomanip>
#include <iostream>


using namespace std; 

bool Contact :: add(){

    cout << "Firstname:\n"; 
    cin.getline(fname,46);
    cout << "Lastname:\n";
    cin.getline(lname,46); 
    cout << "Street:\n";
    cin.getline(street,46);
    cout << "Town:\n";
    cin.getline(town,28);
    cout << "State:\n";
    cin.getline(state,3);
    cout << "ZipCode\n";
    cin >> zip;
    cout << "Zip+4\n";
    cin >> zip_4;
    cout << "Phone Number"; 
    cin >> phone; 

}

bool Contact :: findAddress(char *str1){


}

bool Contact :: findName(char *str1){



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
         << state;

    return true; 



}





