#include "contact.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstring>

using namespace std; 




int main(){
    




    Contact myobj[100];
    bool program = true; 
    char choice,choice2,choice3; 
    long counter = 0; 
    long x,answer;
    

    while (program)
    {
    
       mainMenu();

       cin >> choice; 
    
       switch(choice){
           case '1' : 
           case 'A' : 
           myobj[counter].add();
           counter++; 
           break;
           case '2':
           case 'E':
           x = 0; 
           while(x<counter){
            if(myobj[x].validEntry()){
            cout << x << ") ";
            myobj[x].print_chart();
            }

            x++; 

         }
            cout << "\n" << "Please enter the entry you would like to edit" << "\n";
            cin  >> answer; 
            editMenu();
            cin >> choice2;
            switch (choice2)
            {
                case '1':
                case 'N':
                myobj[answer].editName();
                break; 
                case '2':
                case 'A':
                myobj[answer].editAddress();
                break;
                case '3':
                case 'P':
                myobj[answer].editPhone();
                break; 
                case '4':
                case 'E':
                myobj[answer].editEmail();
                break; 
                case '5':
                case 'M':
                break;

}
        break; 
        
        case '3':
        case 'D':
        x = 0; 
        while(x<counter){
            if(myobj[x].validEntry()){
            cout << x << ") ";
            myobj[x].print_chart();
            }

            x++; 
        }
        cout << "Please enter the entry you would like to delete\n";
        cin >> answer; 
        myobj[answer].empty();
        break; 
        case '4':
        case 'F':
        subMenu();
        cin >> choice3;
    switch (choice3)
            {
            case '1':
            case 'F':
            char firstname[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the firstName you're looking for\n";
            cin.getline(firstname, sizeof(firstname),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].firstName(firstname) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }


            break;

            case '2':
            case 'L':

            char lastname[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the lastname you're looking for\n";
            cin.getline(lastname, sizeof(lastname),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].lastName(lastname) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }

            break; 

            case '3':
            case 'H':
             char house[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the house address you're looking for\n";
            cin.getline(house, sizeof(house),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].houseNumber(house) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }


            break; 

            case '4':
            case 'Z':

             int zip; 
            cin.clear();
            cout << "Please enter the zip you're looking for\n";
            cin >> zip; 
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].lookzip(zip) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }

            break; 

            case '5':
            case 'T':

             char town[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the town you're looking for\n";
            cin.getline(town, sizeof(town),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].looktown(town) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }



            break; 

            case '6':
            case 'S':

             char state[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the state you're looking for\n";
            cin.getline(state, sizeof(state),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].lookstate(state) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }


            break;

            case '7':
            case 'P':

             char phone[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the phone you're looking for\n";
            cin.getline(phone, sizeof(phone),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].lookPhone(phone) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }



            break; 

            case '8':
            case 'E':

             char email[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the email you're looking for\n";
            cin.getline(email, sizeof(email),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].lookEmail(email) == 0){
                    myobj[x].print_chart();
                    break; 
                }
                x++; 
            }
            




            break; 

            case '9':
            case 'M':
            break; 
                

        }
        break; 
        case 'P':
        case '5':
        ///Prints all entries; 

        case 'Q':
        case '6':
        return 0;
        
    }


}
    
















}
   



