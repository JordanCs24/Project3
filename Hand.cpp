/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
*/
#include "Hand.h"

/*

Hand has a parameterized constructor, which you will use to deal a hand of cards
from the deck. Implement this constructor so that it draws N cards from the deck
when an instance of Hand is instantiated.

Hand has three member functions, strHand , dealCard , and getHandSize . Use
strHand() to show human their current hand. This function must return a string
formatted as follows:
[1] purple:5 [2] orange:7 [3] orange:2 [4] purple:10 [5] orange:9 [6] black:6
where the numbers in brackets represent the position of each card in the hand (i.e.,
in vector
hand).

The second member function in Hand is dealCard , which has a parameter num
that represents the position of a card in the hand. Use this function to let human
deal a card from their hand. When a card is dealt, it should be removed from
hand . For the above example, dealCard(2) would deal card orange:7 and
remove it from the hand.

Function getHandSize() returns the current number of cards in the hand.

*/
Hand::Hand(){

}
Hand::Hand(Deck deck, int N){

}
string Hand::strHand(){

}
Card Hand::dealCard(int num){

}
int Hand::getHandSize(){

}
