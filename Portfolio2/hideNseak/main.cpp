#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits> 
#include <vector>
#include "strextra.h"
#include "suffix.h"


using namespace std; 

inline void openMessage(){

    cout << "\tWelcome to the Name Searching Program!!!\n"
         << "\nPlease enter the name of your names file: ";


}

inline void exitMessage(){

    cout << "\nThank you for using the NSP!!\n\nEndeavor to have an amazing day!";


}


int main(){
    bool check,hold;
    char yesno; 
    long x, i; 
    vector <string> names = {};
    vector <long> locations = {};
    string file,namelook;
    fstream myFile; 

    openMessage();

    check = true; 

    cin >> file;

    myFile.open(file,ios::in);

    hold = true;

    while (hold)
    {
   
    

    while(check){
        
        if(myFile.is_open()){
            check = false; 
            cout << "\nFile '" << file << "' opened successfully!";
           string name; 
            while (getline(myFile,name))
            {
                 names.push_back(name);
               
            }


            myFile.close();
            break; 



        }
        else {
            cout << "I'm sorry, I could not open  "
                 << "'" << file << "' ."
                 << "Please enter another name:\n";

            cin >> file; 
            myFile.open(file);
            }



           
        
    }


    
    cout << "\n\nWhat name would you like to find in this file?\n"; 
    
    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(),'\n');

    std :: getline(std::cin, namelook);

     x = 0; 
    

    cout << "\n\nWould you like to find a substring of that name if occurs?(Y/N)";

    cin >> yesno;

    if(tolower(yesno) == 'y'){
        
        x = 0; 
        while(x<names.size()){
            std:: size_t found = names[x].find(namelook);

        if (found != std::string::npos) {
            locations.push_back(x);
        }

        x++; 

        }

         i = 0; 

        while(i<locations.size()){

        string index = "\n" + namelook + " is the " + mySuffix(locations[i]) + " sub-name in the file!";

        cout << (locations.size() != 0 ?  index  : "\nError Not found in the file" );
        i++; 

     }


        locations.clear();

        // cout << locations[0] << "\n" << locations[1];



    }else{

        while(x<names.size()){
        if(strcmp_ncase(namelook, names[x]) == 0){
             locations.push_back(x);
            
        }
        x++;
        

  }
        i = 0; 
       
        while(i<locations.size()){
        string index = "\n" + namelook + " is the " + mySuffix(locations[i]) + " name in the file!";

        cout << (locations.size() != 0 ?  index  : "\nError Not found in the file" );
        i++; 
        }

        locations.clear(); // Empty Vector





    }


    

        cout << "\n\nWould you like to make another search?(Y/N)";

        cin >> yesno;

        if(tolower(yesno) == 'y'){
            hold = true; 
        }else{
            hold = false; 
            exitMessage();
        }

    }


    }

