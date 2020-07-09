 #include "Check.h"
#include <iostream>
#include <string> 
#include <time.h>
#include <vector> 
#include <iomanip>


using namespace std; 

Check :: Check(){

    checkNumber = 0;      //New Object Created
    checkAmount = 0.0; 
    checkCashed = false; 

}

void Check :: deposit(double CheckA){

    checkNumber = -1;  //Don't care for checkNumber
    checkAmount = CheckA;
    checkCashed = true; //Cashed
}

void Check :: withdraw(long checkN, double checkA, bool checkC){

    checkNumber = checkN;
    checkAmount = checkA;
    checkCashed = checkC; 

}

bool getRand(){

    srand( time(NULL) );

    int randNum = rand() % 2;

    return randNum; 


}





long Check :: getCheckNumber(){ return checkNumber;}
double Check :: getCheckAmount(){ return checkAmount;}
bool Check :: getCheckCashed(){ return checkCashed;}

