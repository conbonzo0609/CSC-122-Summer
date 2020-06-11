#include <iostream>
#include "contact.h"
#include <limits> 

using namespace std; 




int main(){
    Contact myobj[100];
    char myconfig[100] = {};
   
    bool test = true;
    bool test1 = true;  
    int menu,menu2,counter,counter2; 

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
        case 1: 
            counter2 = 0; 
            cout << (myobj[counter2].add() == true ? "Contact Successfully Saved\n" : "Contact Save Failed\n");
            counter2++; 
            break; 
        case 2: 
            break; 
        case 3: 
            break; 
        case 4: 
                while(test1){
                subMenu();
                cin >> menu2;
                if(cin.fail()){
                cout << "Please enter a number for the menu\n";
                cin.clear();
                cin.ignore(std::numeric_limits<int>::max(),'\n');
               }else{
                switch (menu2)
                {
                case 1: 
                    cout << "Please enter the name\n";
                    cin >> myconfig;
                    counter = 0; 
                    while(counter<100){
                        if(myobj[counter].findName(myconfig)){
                            myobj[counter].print_chart();
                            break; 
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                    
                    break;
                case 2: 
                    cout << "Please enter the address\n";
                     cin >> myconfig;
                     counter = 0; 
                      while(counter<100){
                        if(myobj[counter].findAddress(myconfig)){
                            myobj[counter].print_chart();
                                
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                     
                    break; 
                case 3: 
                    cout << "Please enter the Phone Number\n";
                    cin >> myconfig;
                     while(counter<100){
                        if(myobj[counter].findPhone(myconfig)){
                            myobj[counter].print_chart();
                                
                        }else{
                            counter++;
                        }
                        cout << "Not Found";
                        break; 

                    }
                   
                    break; 
                case 4:
                    cout << "Please enter the Email\n";
                    cin >> myconfig;
                     while(counter<100){
                        if(myobj[counter].findEmail(myconfig)){
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

            case 5: 
                break; 
            case 6: return 0; 
                break; 




            }

         }
    }
    
}