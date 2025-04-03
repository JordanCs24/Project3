/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 6+ hours
Description: 
*/
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"

using namespace std;

int main(){ 

   Deck deckOfCards;
   deckOfCards.shuffle();
   Player human(deckOfCards,6);
   Player computer(deckOfCards,6);
   Card computerComp; // Stands for computer comparison holds the exact card that was played by the computer
   Card humanComp; // Stands for human comparision holds the exact card that was played by the human
   int choice = 0;
   cout << "Welcome to TigerGame!" << endl;
   cout << "The Deck was shuffled and each player has 6 drawn cards." << endl << endl;
      
   for (int i = 1; i <= 6; i++){ // loop so things don't get repetitive

      cout << "Round " << i  << endl;
      cout << "-------" << endl << endl;
      computerComp = computer.hand.dealCard(1); // deal the first card every time
      cout << "The computer plays: " << computerComp.strCard() << endl; // does 1 to get the first card in the deck
      cout << "Your hand: " << human.hand.strHand() << endl;
      cout << "Which card do you want to play? ";
      cin >> choice;

      while(choice < 1 || choice > human.hand.getHandSize()){
         cout << "Invalid choice, be sure to type the correct card." << endl;
         cout << "Which card do you want to play? ";
         cin >> choice;
      }

      humanComp = human.hand.dealCard(choice); // holds the value of the human's card
      cout << "You played: " << humanComp.strCard() << endl;

      if (humanComp.getValue() > computerComp.getValue()){
            cout << "You win this round!" << endl << endl;
            human.score += humanComp.getValue(); // add the value to the score based off of the humans card value
            cout << "Current scores: " << endl;
            cout << "Human: " << human.score << endl;
            cout << "Computer: " << computer.score << endl << endl;

         }
      else if (humanComp.getValue() < computerComp.getValue()){
            cout << "The computer wins this round!" << endl << endl;
            computer.score += computerComp.getValue(); // add the value to the score based off of the computer card value
            cout << "Current scores: " << endl;
            cout << "Human: " << human.score << endl;
            cout << "Computer: " << computer.score << endl << endl;
      }
      else if(humanComp.getValue() == computerComp.getValue()){
            cout << "Tie!" << endl << endl;
            cout << "Current scores: " << endl;
            cout << "Human: " << human.score << endl;
            cout << "Computer: " << computer.score << endl << endl;
      }
   }
   cout << "FINAL SCORE: " << endl;
   cout << "Human: " << human.score << endl;
   cout << "Computer: " << computer.score << endl;
   
   if(human.score > computer.score){
      cout << "You have won!" << endl;
   }
   else if(human.score < computer.score){
      cout << "Computer has won!" << endl;
   }
   else{
      cout << "You and the computer have tied!" << endl;
   }
   return 0;
}