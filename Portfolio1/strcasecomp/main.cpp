#include <iostream> 
#include <string>
#include "strextra.h"
#include <unistd.h>


using namespace std; 


int main(){

char myString1[500] = {};
char myString2[500] = {};
char a; 

cout << "Please enter your first string\n"; 

cin.getline(myString1, 500);


cout << "Please enter your second string\n";

cin.clear();

cin.getline(myString2,500);

cout << "Would you like to compare Spaces/Punctuation(Y/N)\n";

cin >> a; 

cout << "Comparing the two strings.......\n"; 


if(a == 'Y'){
    cout << "My return value is "<< strcmp_ncase(myString1,myString2,a); // Adds Punc/Space Disregard. 
}else{
    cout << "My return value is " << strcmp_ncase(myString1,myString2); // Defaulted Argument for No Space/Punc Disregard.
}










}