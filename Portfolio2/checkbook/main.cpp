#include <iostream>
#include <fstream>
#include <iomanip>
#include "Check.h"
#include <string>
#include "Account.h"




using namespace std; 

// /////
// ////////////////Account Update///////////////////////////////////

// Previous Balance - 
// Current Balance - 

// Differs - 

// //////////////////////////////////////////////////////////////////



// //////////////Reconcile////////////////////////////////////

// CheckNumber              CheckAmount               CheckCashed 
// ------------------------------------------------------------------


// ///////////////////////////////////////////////////////////

// 1. Deposit
// 2. Withdraw
// 3. Quick Account Update
// 4. Full Reconcile
// //////////


// total for all checks, the total for all deposits, the calculated new balance, and how much this differs from the reported new balance

inline void print_menu(){

    cout << "\n\n1. Deposit\n2. Withdraw\n3. Quick Account Update\n4. Full Reconcile\n5. All Checks Sort\n6. Exit\nEnter your option:[]\n"; 



}

void printL(){  
    for(int i=1;i<60;i++)
    cout<<"--";

     cout<<"\n";
   };



// incline void sub


int main(){
    bool menu = true;
    char answer,answer1,yesno; 
    long counter = 0;
    long checkNum = 0; 
    double amount;
    ofstream myfile;
    string data,checking; 
    Check myobj[100];
    Account obj; 

    


    while(menu){

    print_menu();
    
    cin >> answer;

    switch (answer)
    {
    case '1':
    case 'D':
        amount = 0; 
        cout << "\nHow much is your deposit?\n";
        cin >> amount; 
        myobj[counter].deposit(amount);
        obj.deposit(amount);
        counter++;
        

        break;

    case '2':
    case 'W':
        amount = 0; 
        cout << "\nHow much would you like to withdraw???\n";
        cin >> amount;
         
        myobj[counter].withdraw(checkNum++, amount, getRand());
       if(myobj[counter].getCheckCashed()) 
             obj.withdraw(amount);   
        
       
        if(myobj[counter].getCheckCashed() == 1){
           checking = "TRUE";
       }else{
           checking = "FALSE";
       }
        

        myfile.open("checks.txt", ios_base::app);

      

        cout << "Would you like the data inputted into a file?(Y/N)\n";

        cin >> answer1; 
        myfile.precision(2);
        if(answer1=='Y'){
             myfile << myobj[counter].getCheckNumber()
                 <<  "#"
                 << ", amount: "
                 << fixed
                 << amount
                 << ", cashed: "
                 << checking 
                 << "\n";
        }else{
            cout << "#"
                 << myobj[counter].getCheckNumber()
                 << ", amount: "
                 << setprecision(2)
                 << fixed
                 << amount
                 << ", cashed: "
                 << checking
                 << "\n";
        }

         myfile.close();
         counter++;                                
        break; 

    case '3':
    case 'C':

    cout << "Current Balance: $" << obj.getTotalBalance()
         << "\nPrevious Balance: $" << obj.getPreviousBalance()
         << "\n\nDiffers: $" << obj.getTotalBalance()-obj.getPreviousBalance();
        break; 

    case '4':
    case 'F':
        
         cout<<setw(20)<<"CheckNumber"<<setw(20)<<"CheckAmount"<<setw(25)<<"CheckCashed\n";
        printL();
        for(int i = 0; i<counter; i++){
            if(myobj[i].getCheckNumber() == -1){
                cout<<setw(15)<<"Deposit"<<setw(15)<<"$"<<myobj[i].getCheckAmount() << setw(25) << (myobj[i].getCheckCashed() == 1 ? "TRUE" : "FALSE" )<< endl;
            }else{
                cout<<setw(15)<<"#"<<myobj[i].getCheckNumber()<<setw(15)<<"$"<<myobj[i].getCheckAmount() << setw(25) << (myobj[i].getCheckCashed() == 1 ? "TRUE" : "FALSE" )<< endl;
  
            }

        }
        printL();
        cout << "" << setw(30) <<"Final Balance: $" << obj.getTotalBalance();
     


        
        break; 

    case '5':
    case 'S':

        cout<<setw(20)<<"CheckNumber"<<setw(20)<<"CheckAmount"<<setw(25)<<"CheckCashed\n";
        printL();
        for(int i = 0; i<counter; i++){
            if(myobj[i].getCheckNumber() == -1){
                
            }else{
                cout<<setw(15)<<"#"<<myobj[i].getCheckNumber()<<setw(15)<<"$"<<myobj[i].getCheckAmount() << setw(25) << (myobj[i].getCheckCashed() == 1 ? "TRUE" : "FALSE" )<< endl;
  
            }

        }
        printL();


        break; 

    case '6':
    case 'E':
        return 0; 
        break; 

    
    default:
        break;
    }


    }
    


     
















}
