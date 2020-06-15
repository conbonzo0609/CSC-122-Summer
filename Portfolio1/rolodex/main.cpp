#include <iostream>
#include "contact.h"
#include <limits> 

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
            case 'N':
            char firstname[45];
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            cout << "Please enter the email you're looking for\n";
            cin.getline(firstname, sizeof(firstname),'\n');
            x = 0; 

            while(x < 100){
                if(myobj[x].lookEmail(firstname) == 0){
                    cout << "FOUND";
                    break; 
                }
                x++; 
            }


            break;

            case '2':
            case 'A':

            break; 

            case '3':
            case 'P':

            break; 

            case '4':
            case 'E':

            break; 

            case '5':
            case 'R':
            break; 

                

        }
        break; 
        case 'P':
        case '5':
        ////Print All Entries form 
        break; 

        case 'Q':
        case '6':
        return 0;

    }


}
    
















}
   



