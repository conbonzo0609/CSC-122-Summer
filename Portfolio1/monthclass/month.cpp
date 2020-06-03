
#include <iostream>
#include "month.h"
#include <string>
#include <unordered_map>

using namespace std; 

std:: unordered_map<string, int> look_up = {
        { "jan", 1 },
        { "feb", 2 }, 
        { "mar", 3 }, 
        { "apr", 4 }, 
        { "may", 5 },
        { "jun", 6 }, 
        { "jul", 7 }, 
        { "aug", 8 }, 
        { "sept",9},
        {"oct", 10},
        {"nov", 11},
        {"dec", 12}

};


bool Month::set_month () {
string x,y,substring,lowercase; 
int myNumbered;

cout << "Please enter the Month";

cin >> x; 

for(string::size_type a = 0; a<x.length(); a++){
    if(isdigit (x[a])){
        y += x[a];
    }else{
        lowercase += tolower(x[a]);
    }
}

if(y.length() > 0){
     myNumbered = stoi(y);
}else{
    substring = lowercase.substr(0,3);
    myNumbered = look_up[substring];
    }

    if(myNumbered>0 & myNumbered<=12){
        myMonth = myNumbered; 
        return true;
    }else{
        return false; 
    }

}

short Month:: get_month () {
        return myMonth; 

}

bool Month:: advance (int x) { 
    int getMonth = get_month();
    cout << getMonth;
    if( x > 12){
        return false; 
    }else{
        myMonth = myMonth + x; 
        return true; 
    }



}











