/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
*/
#include "Deck.h"
#include <iostream>
/*
    15 purple cards ranked 1-15 and 
    10 orange cards ranked 1-10 and 
    5 black cards ranked 6-10
*/

Deck::Deck(){
    //Initializing variables for orange and purple card iteration with 1 so the 
    short int orangeCard = 1;
    short int purpleCard = 1;
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

/*
void Deck::printDeck(){ // FUNCTION TO TEST the output of the vector
    for (int i = 0; i < deck.size(); i++){
        if(deck[i].getColor() == black){
            cout << "Card Black: " << endl;
            cout << deck[i] << endl;
            if(deck[i].getRank() == 5){
                cout << endl << endl;
            }
        }
        if(deck[i].getColor() == orange){
            cout << "Card orange: " << endl;
            cout << deck[i] << endl;
            if(deck[i].getRank() == 10){
                cout << endl << endl;
            }
        }
        if(deck[i].getColor() == purple){
            cout << "Card Purple: " << endl;
            cout << deck[i] << endl;
            if(deck[i].getRank() == 15){
                cout << "End of list" << endl;
            }
        }
    }
}
*/