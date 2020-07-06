#include <iostream>
#include <vector>
#include <ctime>
#include <limits>
#include <string>

using namespace std; 

string mySuffix(long suffix){
        suffix++;
        short temp = static_cast<short>(abs(suffix) % 100); 
        short temp2 = static_cast<short>(abs(suffix) % 10);
        string final,final1;
         
        if((temp == 11) || (temp == 12) || (temp == 13)){
                final = to_string(suffix);
                final += "th";
                return final;
        }
         
        switch(temp2){
            case 1: final1 += "st";
                    break; 
            case 2: final1 += "nd";
                    break; 
            case 3: final1 += "rd";
                    break; 
            case 4: final1 += "th";
                    break; 
            case 5: final1 += "th";
                    break; 
            case 6: final1 += "th";
                    break; 
            case 7: final1 += "th";
                    break; 
            case 8: final1 += "th";
                    break; 
            case 9: final1 += "th";
                    break; 
 }

    final1 = to_string(suffix) + final1;

        return final1;



}