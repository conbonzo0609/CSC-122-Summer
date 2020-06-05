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

    if(myNumbered>0 & myNumbered<=12){
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
    
    int answer; 
    bool failSafe= true;  
    


    cout << "Please enter your advancement\n"; 

    while(failSafe){

        cin >> answer; 

        if(cin.fail()){
            cout << "Please enter a number" 
                 << "\nJan:1\nFeb:2\nMar:3" 
                 << "\nApr:4\nMay:5\nJune:6"
                 << "\nJuly:7\nAug:8:\nSept:9"
                 << "\nOct:10\nNov:11\nDec:12\n";
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(),'\n');
        }else if((answer+myMonth <= 12) && (answer+myMonth > 0)){
            failSafe=false; 
            myMonth = myMonth + answer;
            return true; 
        }else{
            cout << "\nERROR TOTAL NUMBER IS GREATER THAN 12";
            break; 
        }
    }

 return false; //Should never reach this point; 


}






bool Month:: retreat() { 
     int answer; 
     bool failSafe = true;  
    


    cout << "Please enter your Retreatment\n"; 

    while(failSafe){

        cin >> answer; 

        if(cin.fail()){
            cout << "Please enter a number" 
                 << "\nJan:1\nFeb:2\nMar:3" 
                 << "\nApr:4\nMay:5\nJune:6"
                 << "\nJuly:7\nAug:8:\nSept:9"
                 << "\nOct:10\nNov:11\nDec:12\n";
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(),'\n');
        }else if((myMonth - answer <= 12) && (myMonth - answer > 0)){
            failSafe=false; 
            myMonth = myMonth - answer;
            return true; 
        }else{
            cout << "\nERROR TOTAL NUMBER IS GREATER THAN 12";
            break; 
        }
    }

 return false; //Should never reach this point; 


}








