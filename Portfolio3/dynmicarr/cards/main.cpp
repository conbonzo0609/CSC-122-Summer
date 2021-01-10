#include <iostream> 
#include <string>

using namespace std; 

enum Suit{spades,clubs,diamonds,hearts,NA};


Suit read(string card){

    string spa = "spades";
    string dia = "diamonds"; 
    string clu = "clubs"; 
    string hea = "hearts";

    Suit mySuit = NA; 

    long cardL = card.length(); 

    for(int i = 0; i<cardL; i++){

        card[i] = tolower(card[i]);

     }

    
   
    if(card == dia.substr(0 , cardL) )
                mySuit = diamonds;

    if(card == spa.substr(0, cardL))
                mySuit = spades; 

    if(card == hea.substr(0, cardL) )
                mySuit = hearts;

    if(card == clu.substr(0, cardL))
                mySuit = clubs;

    
    return mySuit; 


}


void messaging(Suit mySuit){

  
  

   switch (mySuit)

   {

     

       case hearts:

           cout << "You have a heart! Don't wear it on your sleeve..!\n";

           break;

      

       case spades:

           cout << "So, you have a spade! Dig me a hole out back, won't you?\n";

           break;

       

       case clubs:
             cout << "Ah, a club! Don't beat me up!!\n";  
            break;

      
       case diamonds:

           cout << "Ooo...diamonds. Don't cut my monitor with those!\n";

           break;

       case NA:

           cout << "I'm sorry, I don't recognize that suit...please try again.\n";

           break;

   }

}




int main()

{

    char yesno = 'y';
    string card;
    Suit suit;



    cout << "\tWelcome to the Card Suit Entering Program!!!\n";

   

   while (tolower(yesno) == 'y')

   {

       cout << "What is the suit of your card?   ";

       cin >> card;

       suit = read(card);

       messaging(suit);

       cout << "Another card? ";

       cin >> yesno;

   }

   cout << "Thank you for using the CSEP!!\nEndeavor to have a stimulating day!";

   return 0;

}