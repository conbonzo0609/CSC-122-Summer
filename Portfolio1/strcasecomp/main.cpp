#include <iostream> 
#include <string>
#include "strextra.h"
#include <unistd.h>


using namespace std; 


int main(){

char myString1[500] = {};
char myString2[500] = {};

cout << "Please enter your first string"; 

cin.getline(myString1, 500);


cout << "Please enter your second string";

cin.clear();

cin.getline(myString2,500);



cout << "\n\nComparing the two strings......."; 


cout << "\n\nMy return value is " << strcmp_ncase(myString1,myString2) << "\n\n";








}