#include <iostream>
#include "month.h"
#include <string>
#include <unordered_map>
#include <limits>

using namespace std; 

unordered_map<string, int> look_up = {   // Month -> Number Lookup
        { "jan", 1 },
        { "feb", 2 }, 
        { "mar", 3 }, 
        { "apr", 4 }, 
        { "may", 5 },
        { "jun", 6 }, 
        { "jul", 7 }, 
        { "aug", 8 }, 
        { "sep", 9},
        {"oct", 10},
        {"nov", 11},
        {"dec", 12}

};

// Month :: Month(){

//     myMonth = 0; 

// }

bool Month::set_month () {                  //Completed set_month via substring & int 
    string x,y,substring,lowercase; 
    int myNumbered;

    cout << "Please enter the Month\n";

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

    if(myNumbered>0 && myNumbered<=12){
        myMonth = myNumbered; 
        return true;
    }else{
        return false; 
    }

}

string Month:: get_month () {              
                                           
      int month = myMonth; 

      switch(month){
        case 1: return "January";
        break; 
        case 2: return "Febuary";
        break; 
        case 3: return "March";
        break; 
        case 4: return "April";
        break; 
        case 5: return "May"; 
        break; 
        case 6: return "June";
        break; 
        case 7: return "July";
        break; 
        case 8: return "August";
        break; 
        case 9: return "Sepetember";
        break; 
        case 10: return "October";
        break; 
        case 11: return "November";
        break; 
        case 12: return "December"; 

        default: return "NA";
        break; 

}
}

bool Month:: advance () {                 
   int x;
    cout << "Please enter your advancement" << "\n"; 

    cin >> x; 

    myMonth = (myMonth + x) % 12;

    if(myMonth == 0){
        myMonth = 12; 
    }

    return true; 

}


////Use modulo to break months remainder. 




bool Month:: retreat () {     
    int x,temp; 
    
    cout << "Please enter your retreatment" << "\n"; 

   cin >> x; 

   temp = 0;

   while(temp != x){

        temp++; 
        myMonth--; 

        if(myMonth == 0){
            myMonth = 12; 
        }

    } 

    return true; 

}



