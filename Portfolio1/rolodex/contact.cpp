 #include "contact.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstring>
#include <cstdio>

using namespace std; 

void Contact :: add(){
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


   

}


const char * Contact :: getData(){

    static char myData[500] = {};


    strcat(myData,"<name>");      
    strcat(myData,fname);
    strcat(myData," ");
    strcat(myData,lname);
    strcat(myData,"\n<Street>");
    strcat(myData,street);
    strcat(myData,"</Street>");
    strcat(myData,"\n<Town>");
    strcat(myData,town);
    strcat(myData,"</Town>");
    strcat(myData,"\n<State>");
    strcat(myData,state);
    strcat(myData,"</State>");
    strcat(myData,"\n<Phone>");
    strcat(myData,phone);
    strcat(myData,"</Phone>");
    strcat(myData,"\n<Email>");
    strcat(myData,email);
    strcat(myData,"</Email");

    int i = strlen(myData);

    myData[i] = '\0';

    return myData;

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

int Contact :: lookfirstName(char c[]){
    return strcmp(c,fname);
}

int Contact :: looklastName(char c[]){
    return strcmp(c,lname);
}

int Contact :: lookhouseNumber(char c[]){
    return strcmp(c,street);
}

int Contact :: lookzip(long zipcode){
    if(zip == zipcode){
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

void Contact :: print_chart(){

    cout << fname << " " << lname << setw(6)
    << "|"
    << setw(14) << street << "," 
    << town << ","<< state <<'|'<< setw(14)
    << phone
    << setw(5)
    << "|"
     << setw(25)
     << email
     << setw(3)
     << "|"
     << endl;


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




