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
   Player computer(deckOfCards,6);
   Player human(deckOfCards,6);
   int choice = 0;
  // 1. Create a deck of cards and shuffle it.
  // 2. Create two players, each one with 6 cards in their hand.
  // 3. Play five rounds. In each round:
  //    - Have computer deal a card from their hand.
  //    - Show human their hand of cards so that they can make a selection.
  //    - Have human deal their card.
  //    - Determine who won the round and update points accordingly.
  //    - Print results for current round.
  // 4. Print final game results.

   cout << "Welcome to TigerGame!" << endl;
   cout << "The Deck was shuffled and each player has 6 drawn cards." << endl << endl;
   
   cout << "Round 1" << endl;
   cout << "-------" << endl << endl;
   cout << "The computer plays: " << computer.hand.dealCard(1).strCard() << endl; // does 1 to get the first card in the deck
   cout << "Your hand: " << human.hand.strHand() << endl;
   cout << "Which card do you want to play? ";
   cin >> choice;

   while(choice < 1 || choice > human.hand.getHandSize()){
      cout << "Invalid choice, be sure to type the correct card." << endl;
      cout << "Which card do you want to play? ";
      cin >> choice;
   }
   cout << "You played: " << human.hand.dealCard(choice).strCard() << endl;
   
   return 0;
}
