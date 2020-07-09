#include "Account.h"
#include <iostream>



using namespace std; 

Account :: Account(){   //constructor

    totalbalance = 0.0;
    previousbalance = 0.0; 

}
                                    //accessor
double Account :: getTotalBalance(){return totalbalance;}
double Account :: getPreviousBalance(){return previousbalance;}


void Account :: deposit(double add){  //mutator
    previousbalance = totalbalance;
    totalbalance = totalbalance + add; 

}

void Account :: withdraw(double sub){  //mutator
  previousbalance = totalbalance; 
  totalbalance = totalbalance - sub; 

}