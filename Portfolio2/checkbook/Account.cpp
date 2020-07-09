#include "Account.h"
#include <iostream>
#include <string> 
#include <vector> 
#include <iomanip>


using namespace std; 

Account :: Account(){

    totalbalance = 0.0;
    previousbalance = 0.0; 

}

double Account :: getTotalBalance(){
    return totalbalance;
    
}

double Account :: getPreviousBalance(){

    return previousbalance;
}


void Account :: deposit(double add){
    previousbalance = totalbalance;
    totalbalance = totalbalance + add; 

}

void Account :: withdraw(double sub){
  previousbalance = totalbalance; 
  totalbalance = totalbalance - sub; 

}