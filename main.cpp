#include <iostream>

using namespace std;

int main()
{
  int secretNum = 6 , guess , counter=0 , limit=3;
   bool HaveGuesses = true ;

   while (guess!=secretNum && HaveGuesses ){
     if (guess <= 10 ){
     if (guess >= 0 ){
     if (counter < limit){
       if (counter == 0){
       cout<<"Guess a number from 0 to 10 (3 Remaining): ";
       cin>> guess;
       counter ++;
       } else if(counter == 1){
       cout<<"Guess a number from 0 to 10 (2 Remaining): ";
       cin>> guess;
       counter ++;
       } else if(counter ==2 ){
       cout<<"Guess a number from 0 to 10 (1 Remaining): ";
       cin>> guess;
       counter ++;
       }
       } else {
         HaveGuesses = false ;}


     } else if (counter == 1){
        cout<<"Enter a positive number (2 Remaining): ";
        cin>> guess;
        counter ++;
          }
      else if  (counter == 2){
        cout<<"Enter a positive number (1 Remaining): ";
        cin>> guess;
        counter ++;
      }else {
      HaveGuesses = false;
     }


     } else if (counter == 1 ){
         cout<<"Enter a number less than 10 (2 Remaining): ";
         cin>> guess;
         counter ++;
     } else if (counter == 2 ){
         cout<<"Enter a number less than 10 (1 Remaining): ";
         cin>> guess;
         counter ++;

    } else {

         HaveGuesses= false ;
    }
   }

    if (HaveGuesses){
        cout<<"You win!!";
   } else {
        cout<<"You lose!!";
   }


             return 0;
}
