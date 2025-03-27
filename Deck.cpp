/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
*/
#include "Deck.h"

/*
    15 purple cards ranked 1-15 and 
    10 orange cards ranked 1-10 and 
    5 black cards ranked 6-10
*/

Deck::Deck(){
    //Creating variables for orange and purple card iteration
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

}
Card Deck::drawCard(){

}
int Deck::getDeckSize(){

}