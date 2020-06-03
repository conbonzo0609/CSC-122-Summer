
#include <iostream>
#include "month.h"


using namespace std; 


bool Month::set_month () {
int x; 
    cout << "Please enter the Month";

    cin >> x; 

    if(x>0 & x <=12){
        myMonth = x; 
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











