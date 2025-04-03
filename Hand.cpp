/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 1+ hours
Description: Hand cpp file for the Hand class that holds the function  definitions
*/
#include "Hand.h"
#include <sstream>

Hand::Hand(){

}
Hand::Hand(Deck deck, int N){

   for( int i = 0; i < N;i++){
        hand.push_back(deck.drawCard()); // push the 
    }
}
string Hand::strHand(){
    stringstream showHand;
    showHand.flush(); // just to make sure all the string's content was dropped before inserting more into the string
    for(size_t i = 0; i < hand.size(); i++){
        showHand << "[" << i + 1 << "] " << hand[i].strCard() << " ";
    }
    return showHand.str();
}
Card Hand::dealCard(int num){
    Card dealtCard = hand.at(num - 1); // initialize dealtCard before that position of hand gets erased
    hand.erase(hand.begin() + (num - 1)); // erase the Card at the position (considering 0 is the starting position)
    return dealtCard;
}
int Hand::getHandSize(){
    return hand.size();
}
