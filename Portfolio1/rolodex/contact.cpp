 #include "contact.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstring>
#include <cstdio>

using namespace std; 

bool Contact :: add(){
cin.clear();
cin.ignore(std::numeric_limits<int>::max(),'\n');

cout << "Firstname: \n";
cin.getline(fname, sizeof(fname), '\n'); 

cout << "Lastname: \n"; 
cin.getline(lname, sizeof(lname), '\n');

cout << "Street Number: \n"; 
cin.getline(street, sizeof(street), '\n');

cout << "Town: \n";
cin.getline(town, sizeof(town), '\n');

cout << "ZIP: \n"; 
cin >> zip;
cin.ignore(std::numeric_limits<int>::max(),'\n');

cout << "State: \n";
cin.getline(state, sizeof(state), '\n');

cout << "Phone: \n";
cin.getline(phone, sizeof(phone), '\n');

cout << "Email: \n";
cin.getline(email, sizeof(email), '\n');

return true; 

   

}

void Contact :: editName(){
    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(),'\n');

    cout << "Firstname: \n";
    cin.getline(fname, sizeof(fname), '\n'); 

    cout << "Lastname: \n"; 
    cin.getline(lname, sizeof(lname), '\n');

}

void Contact :: editAddress(){
    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(),'\n');

    cout << "Please enter your desired Street Number change\n";
    cin.getline(street,sizeof(street), '\n');

    cout << "Please enter your desired Town change: \n";
    cin.getline(town, sizeof(town), '\n');

    cout << "Please enter your desired ZIP change: \n"; 
    cin >> zip;
    cin.ignore(std::numeric_limits<int>::max(),'\n');

    cout << "Please enter your desired State change: \n";
    cin.getline(state, sizeof(state), '\n');


    
}

void Contact :: editPhone(){
    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(),'\n');

    cout << "Please enter your desired Phone change\n";
    cin.getline(phone,sizeof(phone), '\n');
    
}

void Contact :: editEmail(){
    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(),'\n');

    cout << "Please enter your desired Email change\n";
    cin.getline(email,sizeof(email), '\n');
    
}

int Contact :: lookEmail(char c[]){
        return strcmp(c,email);
}

int Contact :: lookPhone(char c[]){
        return strcmp(c,phone);
}

int Contact :: firstName(char c[]){
    return strcmp(c,fname);
}

int Contact :: lastName(char c[]){
    return strcmp(c,lname);
}

int Contact :: houseNumber(char c[]){
    return strcmp(c,street);
}

int Contact :: lookzip(long zip){
    if(zip == zip){
        return 0;
    }else{
        return 1; 
    }
}

int Contact :: looktown(char c[]){
    return strcmp(c, town);
}

int Contact :: lookstate(char c[]){
    return strcmp(c, state);
}











// bool Contact :: findAddress(char *str1){

//     return false;  
// }

// bool Contact :: findName(char *str1){
    
        

// }

// bool Contact :: findPhone(char *str1){

//     if(str1 == phone)
//         return true; 
//         return false; 


// }

// bool Contact :: findEmail(char *str1){

//     if(str1 == email)
//         return true;
//         return false; 
// }

void Contact :: print_chart(){

    // cout << fname << " " << lname << " || " 
    // << street << "," 
    // << town << "," 
    // << zip << "," 
    // << state 
    // << " || " 
    // << phone 
    // << " || " << email << "\n"; 

   
cout << fname << " " << lname
    << setw(19)
    << street
    << "," 
     << town 
     << ","
     << state
     << setw(14)
     << phone
     << setw(31)
     << email
     << endl;

     //-----------------+---------------------------+------------------+---------------+

        //  setw(11);
        //  setw(28);
        //  setw(18);
        //  setw(19);

}


void Contact :: empty(){
    memset(fname,0,sizeof(fname));
    memset(lname,0,sizeof(lname));
    memset(street,0,sizeof(street));
    memset(town,0,sizeof(town));
    memset(state,0,sizeof(state));
    memset(phone,0,sizeof(phone));
    memset(email,0,sizeof(email));
    zip = 0; 
}

bool Contact :: validEntry(){

    if(strlen(fname) > 0 && strlen(lname) > 0)
        return true;
            

    return false; 
        



}




