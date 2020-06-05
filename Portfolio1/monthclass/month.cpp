#include <iostream>
#include "month.h"
#include <string>
#include <unordered_map>

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
        { "sept",9},
        {"oct", 10},
        {"nov", 11},
        {"dec", 12}

};


bool Month::set_month () {                  //Completed set_month via substring & int 
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

string Month:: get_month () {              // Returns Month based on integer from class 
                                           // via string
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

bool Month:: advance () {                  // Advances....i've added substring advancement, but kinda pointless
    string answer,stringAnswer,numericAnswer; 
    int myInt;
    cout << "\nPlease enter your advancement"; 

    cin >> answer; 


    for(string::size_type i = 0; i<answer.length(); i++){
        if(isdigit (answer[i])){
        numericAnswer += answer[i];
    }else{
        stringAnswer += tolower(answer[i]);
    }
}

    if(stringAnswer.length() > 0){

        myInt = look_up[stringAnswer.substr(0,3)];

    }else if(myInt + myMonth > 12){
        cout << "Invalid Month Entry. Please retreat! ";
        return false;
    }else if(stoi(numericAnswer) + myMonth > 12){
        cout << "Invalid Month Entry Please retreat! ";
        return false; 
    }else if(stringAnswer.length() > 0){
        myMonth = myMonth + myInt;
        return true; 
    }else{
        myMonth = myMonth + stoi(numericAnswer);
        return true; 
}
        return false; 

    }

bool Month:: retreat() {                    // Advances....i've added substring advancement, but kinda pointless

    string answer,stringAnswer,numericAnswer; 
    int myInt;
    cout << "Please enter your retreatment"; 

    cin >> answer; 


    for(string::size_type i = 0; i<answer.length(); i++){
        if(isdigit (answer[i])){
        numericAnswer += answer[i];
    }else{
        stringAnswer += tolower(answer[i]);
    }
}

    if(stringAnswer.length() > 0){

    myInt = look_up[stringAnswer.substr(0,3)];

    }else if(myMonth - myInt > 12){                    //If goes over 12 it will need to retreat
        cout << "Invalid Month Entry. Please retreat! ";
        return false;
    }else if(myMonth - stoi(numericAnswer) > 12){
        cout << "Invalid Month Entry Please retreat! ";
        return false; 
    }else if(stringAnswer.length() > 0){
        myMonth = myMonth - myInt;
        return true; 
    }else{
        myMonth = myMonth - stoi(numericAnswer);
        return true; 
}

        return false; 

    }




