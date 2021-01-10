#include <iostream>
#include<bits/stdc++.h> 
#include <vector>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <iterator>
#include 
using namespace std;

class frame
{
private:
    string str,placement, character,file;
    ofstream myfile; 
  

public:
    frame();
    void pattern();
    void Input(int i); 
    void Output(int i);
   

};

void frame:: Input(int i){

    if(i == 1){
        getline(cin, str);
    }else if(i == 2){
        getline(cin, placement);
    }else if(i == 3){
        getline(cin, character);
    }else if(i == 4){
        getline(cin, file);
        
    }
    return; 
}

void frame:: Output(int i){

    if(i == 1)
    cout << "Enter the String\n";

    if(i == 2)
    cout << "Please enter the placememnt(left/center/right)\n"; 

    if(i == 3)
    cout << "Please enter your character(@, #, *, +, x, X, o, or O)\n";

    if(i == 4)
    cout << "Would you like output to the console or in a file(console/file)\n"; 

    return; 


}

frame::frame()
{
    str = " "; 
}

void frame:: pattern(){

    vector <string> mycontents;

    string word,realword; 

    stringstream iss(str);

    while( iss >> word)      //parses the length of longest word.
    mycontents.push_back(word);
    int myinfo = 0; 
    for(int i = 0; i<mycontents.size(); i++){

            if(mycontents[i].length() > myinfo)
                myinfo = mycontents[i].length();
    }    

     
     
     
     if(placement == "left"){ /////left
        myfile.open("pattern.txt");
        file == "console" ? cout << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n"
                          : myfile << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n";
     for(auto x : str){

         if(isspace(x))
         {

            file == "console" ? cout << character[0] << " " << realword << setw(myinfo-realword.length()+2) << " " << character[0] << "\n" 
                              : myfile << character[0] << " " << realword << setw(myinfo-realword.length()+2) << " " << character[0] << "\n";  
            realword = ""; 
         }
        else{

            realword = realword + x; 
        }

 }


        file == "console" ? cout << character[0] << " " << realword << "  " << character[0] << "\n"
                          : myfile << character[0] << " " << realword << "  " << character[0] << "\n";

        file == "console" ?  cout << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n"
                          : myfile << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n";

          myfile.close();            
    }


    if(placement == "right"){        ///right 
        myfile.open("pattern.txt"); 


       file == "console" ? cout << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n"
                         : myfile << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n";

     for(auto x : str){

         if(isspace(x))
         {

           file == "console" ? cout << character[0] << " " << setw(myinfo) << realword <<  "  " << character[0] << "\n"
                             : myfile << character[0] << " " << setw(myinfo) << realword <<  "  " << character[0] << "\n";
           realword = ""; 
         }
        else{

            realword = realword + x; 
        }

 }

        file == "console" ? cout << character[0] << " " << realword << "  " << character[0] << "\n"
                          : myfile << character[0] << " " << realword << "  " << character[0] << "\n";

        file == "console" ?  cout << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n"
                          : myfile << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n";

        myfile.close();

    }

    
    
    
    
    if(placement == "center"){   
        myfile.open("pattern.txt");

         file == "console" ? cout << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n"
                            : myfile << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n";

     for(auto x : str){
        
        if(isspace(x))
         {

           file == "console" ? cout << character[0] << " " << setw((realword.length()+2)) << realword << setw((myinfo-realword.length())) << " " << character[0]  << "\n" 
                             : myfile << character[0] << " " << setw((realword.length()+2)) << realword << setw((myinfo-realword.length())) << " " << character[0]  << "\n"; 
           realword = ""; 
         }
        else{
          realword = realword + x; 

        }

 }

        file == "console" ? cout << character[0] << " " << realword << "  " << character[0] << "\n"
                          : myfile << character[0] << " " << realword << "  " << character[0] << "\n";

        file == "console" ? cout << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n"
                          : myfile << character[0] << string(2,character[0]) << string(myinfo, character[0]) << string(2, character[0]) << "\n";

        myfile.close(); 
    }

};


int main()

{

frame obj; 

obj.Output(1);

obj.Input(1); 

obj.Output(2);

obj.Input(2);

obj.Output(3);

obj.Input(3); 

obj.Output(4);

obj.Input(4);

obj.pattern();



}