#include <iostream>
#include "contact.h"
#include <limits> 

using namespace std; 




int main(){
    Contact myobj[100];
    char myconig[100] = {};
   
    bool test = true;
    bool test1 = true;  
    int menu,menu2,counter; 

    while (test)
    {

        mainMenu();
        cin >> menu;

        if(cin.fail()){
            cout << "Please enter a number for the menu";
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
        }else{

            switch (menu)
            {
        case 4: 
                while(test1){
                subMenu();
                cin >> menu2;
                if(cin.fail()){
                cout << "Please enter a number for the menu";
                cin.clear();
                cin.ignore(std::numeric_limits<int>::max(),'\n');
               }else{
                switch (menu2)
                {
                case 1: 
                    cout << "Please enter the name";
                    cin >> myconig;
                    counter = 0; 
                    while(counter<100){
                        if(myobj[counter].findName(myconig)){
                            myobj[counter].print_chart();
                                
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                    
                    break;
                case 2: 
                    cout << "Please enter the address";
                     cin >> myconig;
                     counter = 0; 
                      while(counter<100){
                        if(myobj[counter].findAddress(myconig)){
                            myobj[counter].print_chart();
                                
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                     
                    break; 
                case 3: 
                    cout << "Please enter the Phone Number";
                    cin >> myconig;
                     while(counter<100){
                        if(myobj[counter].findPhone(myconig)){
                            myobj[counter].print_chart();
                                
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                   
                    break; 
                case 4:
                    cout << "Please enter the Email";
                    cin >> myconig;
                     while(counter<100){
                        if(myobj[counter].findEmail(myconig)){
                            myobj[counter].print_chart();
                            break; 
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                    break; 
                case 5: mainMenu();
                break; 
            }
                break; 
                    }
                }

            }

         }
    }
    
}