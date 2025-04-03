/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
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
   cout << "Human score After init: " << human.score << endl;
   Card computerComp;
   Card humanComp;
   int choice = 0;
  //    - Determine who won the round and update points accordingly.
  //    - Print results for current round.
  // 4. Print final game results.
   cout << "Welcome to TigerGame!" << endl;
   cout << "The Deck was shuffled and each player has 6 drawn cards." << endl << endl;
      
   for (int i = 1; i < deckOfCards.getDeckSize(); i++){

      cout << "Round " << i  << endl;
      cout << "-------" << endl << endl;
      computerComp = computer.hand.dealCard(1);
      cout << "The computer plays: " << computerComp.strCard() << endl; // does 1 to get the first card in the deck
      cout << "Your hand: " << human.hand.strHand() << endl;
      cout << "Which card do you want to play? ";
      cin >> choice;

      while(choice < 1 || choice > human.hand.getHandSize()){
         cout << "Invalid choice, be sure to type the correct card." << endl;
         cout << "Which card do you want to play? ";
         cin >> choice;
      }

      humanComp = human.hand.dealCard(choice);
      cout << "You played: " << humanComp.strCard() << endl;

      if (humanComp.getValue() > computerComp.getValue()){
            cout << "You win this round!" << endl << endl;
            human.score += humanComp.getValue();
            cout << "Current scores: " << endl;
            cout << "Human: " << human.score << endl;
            cout << "Computer: " << computer.score << endl << endl;

         }
      else if (humanComp.getValue() < computerComp.getValue()){
            cout << "The computer wins this round!" << endl << endl;
            computer.score += computerComp.getValue();
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
   return 0;
}