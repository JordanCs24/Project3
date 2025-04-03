/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 20+ minutes
Description: Hand header file for the Hand class that holds the function and method declarations
*/
#ifndef HAND_H
#define HAND_H
#include <vector>
#include "Card.h"
#include "Deck.h"
#include <string.h>
using namespace std;

class Hand : public Deck{
private:
    vector<Card> hand;
public:
    Hand();
    Hand(Deck deck, int N);
    string strHand();
    Card dealCard(int num);
    int getHandSize();
}; 
#endif