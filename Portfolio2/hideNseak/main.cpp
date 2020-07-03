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


int main(){
    bool check,found;
    vector <string> names = {};
    string file,namelook;
    fstream myFile; 

    openMessage();

    check = true; 

    cin >> file;

    myFile.open(file,ios::in);

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

    long x = 0; 
    found = false; 

    while(x<names.size()){
        if(strcmp_ncase(namelook, names[x]) == 0){
            found = true; 
            break; 
            

        }else{
            x++;
        }

  }
        x++; 
        string index = "\n" + namelook + " is the " + mySuffix(x) + " name in the file!";

        cout << (found == true ?  index  : "\nError Not found in the file" );

    



    }

