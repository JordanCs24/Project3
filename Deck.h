/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
*/
#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"
using namespace std;

class Deck : public Card{
private:
    vector<Card> deck;
public:
    Deck::Deck();
    void shuffle();
    Card drawCard();
    int getDeckSize();
};

#endif