#ifndef Account_H
#define Account_H

class Account
{
private:
   double totalbalance;
   double previousbalance; 
public:

Account();



double getTotalBalance();
double getPreviousBalance();
void deposit(double add);
void withdraw(double sub);



    
};



#endif


