/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
*/
#include <iostream>
#include <iomanip>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"

using namespace std;

int main(){ 
     
    //Testing the strCard function
    /*
    Card MyCard(4,Card::orange);
    cout << MyCard.strCard() << endl;
    */
   Deck deckOfCards;
   deckOfCards.shuffle();
   Hand testingHand(deckOfCards,6);
   cout << "Welcome to TigerGame!" << endl;
   cout << "The Deck was shuffled and each player has 6 drawn cards." << endl << endl;
   cout << "Round 1" << endl;
   cout << "-------" << endl << endl;
   cout << "The computer plays: " << endl;
   cout << "Your hand: " << testingHand.strHand() << endl;
   cout << "Which card do you want to play? " << endl;
   cout << "You played: " << endl;
   cout << "Testing Hand class" << endl;
   
/*
   cout << endl << endl << "Begining Testing the vector and shuffle function" << endl;
   deckOfCards.printDeck();
   cout << "After Shuffle" << endl;
   deckOfCards.shuffle();
   deckOfCards.printDeck();
*/
   return 0;
}
