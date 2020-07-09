 #include "Check.h"
#include <iostream>
#include <time.h>



using namespace std; 

Check :: Check(){  //Constructor

    checkNumber = 0;      //New Object Created
    checkAmount = 0.0; 
    checkCashed = false; 

}

void Check :: deposit(double CheckA){   //MUTATOR

    checkNumber = -1;  //Don't care for checkNumber
    checkAmount = CheckA;
    checkCashed = true; //Cashed
}

void Check :: withdraw(long checkN, double checkA, bool checkC){  //MUTATOR

    checkNumber = checkN;   
    checkAmount = checkA;
    checkCashed = checkC; 

}

bool getRand(){      //random cashed

    srand( time(NULL) );

    int randNum = rand() % 2;

    return randNum; 


}





long Check :: getCheckNumber(){ return checkNumber;}  //accessors
double Check :: getCheckAmount(){ return checkAmount;} 
bool Check :: getCheckCashed(){ return checkCashed;}

