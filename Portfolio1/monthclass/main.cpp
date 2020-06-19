#include "month.h"
#include <iostream>
#include <limits>

using namespace std; 

void print_menu(){

    cout << "\n1. Set Month\n2. Get Month\n"
    << "3. Advance Month\n"
    << "4. Retreat Month\n"
    << "5. Exit\n"
    << "Enter your option []: \n";

}

int main(){

    Month myobj;

    string mySNumber; 

    int menu;

    bool exit = false; 

    while(!exit){

        print_menu(); 

        cin >> menu;
    if(cin.fail()){
        cout << "Please a number for the menu";
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(),'\n');
    }else{
        switch(menu){

        case 1 : myobj.set_month() == true ? 
        cout << "\nMonth Assigned" : cout << "\nMonth Rejected";
        break;
        case 2 : cout << myobj.get_month();
        break; 
        case 3 : myobj.advance() == true ? 
        cout << "\nMonth Advanced" : cout << "\nMonth Advancement Failed"; 
        break; 
        case 4 : myobj.retreat() == true ? 
        cout << "\nMonth Retreated" : cout <<  "\nMonth Retreated Failed"; 
        break; 
        case 5 : exit = true; 
        break; 

            }
        }

    }

}























