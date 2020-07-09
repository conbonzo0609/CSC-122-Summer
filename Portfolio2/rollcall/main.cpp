#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <vector>


using namespace std; 

inline void openingMessage(){

    cout << "\n\tWelcome to the People Data Copying Program!!!\n\n"
         << "Please enter the name of your names file:";



}

struct people
{

    string name; 
    long id; 
    string add1; 
    string add2;
    string phone;
    string major; 
   
};

void printL(){  
    for(int i=1;i<60;i++)
    cout<<"--";

     cout<<"\n";
   };






int main ()
{
	
    long x; 
    ifstream info; 
    struct people records[100]; 
    string name, add1, add2, phone, major,id,file; 
    bool check = true; 

    openingMessage();

    cin >> file;

    info.open(file);

    while(check){

        

        if(info.is_open()){
            check = false; 
            cout << "\nFile '" << file << "' opened successfully!";
            break; 
        }
        else {
            cout << "I'm sorry, I could not open  "
                 << "'" << file << "' ."
                 << "Please enter another name:\n";
            }
            cin >> file; 
            info.open(file);
        
    }

	
    
; 

   
   

    x = 0; 

    while(!info.eof()){


        getline(info, name);
        getline(info, id);
        getline(info, add1);
        getline(info ,add2);
        getline(info, phone);
        getline(info, major); 

        if(x >= 1){

        records[x].name = name; 
        records[x].id = stol(id); 
        records[x].add1 = add1; 
        records[x].add2 = add2; 
        records[x].phone = phone; 
        records[x].major = major; 


        }
     x++; 
}

   cout<<"\n\n\n";
   cout<<setw(60)<<"ROSTER  TABLE\n";
   printL();
   cout<<setw(15)<<"Name"<<setw(15)<<"Student ID"<<setw(15)<<"Address 1"
     <<setw(20)<<"Phone"<<setw(35)<<"Major\n";
   printL();
   for(int i=1;i<x;i++)
{
    cout<<setw(15)<<records[i].name<<setw(15)<<records[i].id<<setw(22)<<records[i].add1
    <<setw(20)<<records[i].phone<<setw(35)<<records[i].major<< endl;
}

    printL();

    return 0;

}