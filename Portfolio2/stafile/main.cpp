#include <iostream>
#include <fstream>
#include <string>
#include <vector> 
#include <cmath> 
#include <iomanip>


using namespace std; 

inline void openMessage(){

    cout << "\tWelcome to the Number Statistics Program!!!\n"
         << "\nPlease enter the name of your data file: ";


}

double findDeviation(vector<double> myNumbers){
    double sum = 0.0,mean,vari = 0.0,deviation; 

   

    
    for(int i = 0; i < myNumbers.size(); ++i)
    sum += myNumbers[i];
    mean = sum/myNumbers.size();
    for(int i = 0; i<myNumbers.size(); ++i)
    vari += pow(myNumbers[i] - mean,2);
    vari  = vari/(myNumbers.size()-1);
    deviation = sqrt(vari); 

    return deviation; 

    
}

long findLargest(vector<double> myNumbers){

    long n = myNumbers.size();
    long max = myNumbers[0]; 

    for(int i=0;i<n;i++){
        if(myNumbers[i]>max)
            max = myNumbers[i];

    }

    return max; 


}

long findSmallest(vector<double> myNumbers){

    long n = myNumbers.size();
    long min = myNumbers[0]; 

    for(int i=0;i<n;i++){
        if(myNumbers[i]<min)
            min = myNumbers[i];

    }

    return min; 


}

void printResults(long count, long min, double avg, long max, double stdDev){

    cout << "\nDone proccessing data!\n\n" 
         << "For your data, the statistics are as follows:\n\n"
         << setw(5)
         << "Count:  "
         << count
         << "\n"
         << setw(5)
         << "Minimum: "
         << min
         << "\n"
         << setw(5)
         << "Average: "
         << avg
         << "\n"
         << setw(5)
         << "Maximum: "
         << max
         << "\n"
          << setw(5)
         << "stdDev: "
         << stdDev
         << "\nThank you for using the NSP!!\n\n"
         << "Endeavor to have a undulating day!\n\n";
          






}


int main(){
    vector <double> myNumbers = {};

    // cout << findDeviation(myNumbers);

    ifstream myFile; 
    ofstream outFile;
    string file; 
    long sum,x,counter,min,max;
    double avg,deviation;

    
    bool check = true; 
    

    openMessage();
    
    cin >> file;

    myFile.open(file);

    while(check){

        

        if(myFile.is_open()){
            check = false; 
            cout << "\nFile '" << file << "' opened successfully!";
            break; 
        }
        else {
            cout << "I'm sorry, I could not open  "
                 << "'" << file << "' ."
                 << "Please enter another name:\n";
            }
            cin >> file; 
            myFile.open(file);
        
    }
    sum = 0;
    x = 0; 
    counter = 0; 
     
     
     while (myFile >> x) {
        sum = sum + x; 
        counter++; 
        myNumbers.push_back(x);
    }

    cout << "\nCalculating...";

   min = findSmallest(myNumbers); 
   max = findLargest(myNumbers); 
   avg = static_cast<double>(sum) / static_cast<double>(counter);
   deviation = findDeviation(myNumbers);

   myFile.close();

   printResults(counter,min,avg,max,deviation);

   


    




 

}


