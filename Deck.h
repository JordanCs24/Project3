/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 20+ minutes
Description: Deck header file for the Deck class that holds the function and method declarations
*/
#ifndef DECK_H
#define DECK_H

#include <vector>
#include <algorithm>
#include "Card.h"
using namespace std;

class Deck : public Card{
private:
    vector<Card> deck;
public:
    Deck();
    void shuffle();
    Card drawCard();
    int getDeckSize();
};

#endif