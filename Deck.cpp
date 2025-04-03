/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 2+ hours
Description: Deck cpp file for the Deck class that holds the function definitons
*/
#include "Deck.h"
#include <iostream>

Deck::Deck(){
    //Initializing variables for orange and purple card iteration with 1 so the 
    int orangeCard = 1;
    int purpleCard = 1;
    for(int i = 0; i < 30; i++){ // With this loop we're going to store the cards according to it's color
        if(i >= 0 && i <= 4){
            deck.push_back(Card(i + 1,Color::black)); // Added i + 1 so the rank isn't for example rank(0)
        }
        else if(i >= 5 && i <= 14){
            deck.push_back(Card(orangeCard,Color::orange));
            orangeCard++; 
        }
        else if(i > 14){
            deck.push_back(Card(purpleCard,Color::purple));
            purpleCard++;
        }
    }
}
void Deck::shuffle(){
    random_shuffle(deck.begin(),deck.end()); // shuffles through the vector deck
}
Card Deck::drawCard(){
    Card cardVar = deck.at(0); // holds the first element
    deck.erase(deck.begin()); // erases the card at the first element
    return cardVar;
}
int Deck::getDeckSize(){
    return deck.size(); // returns the size of the deck
}