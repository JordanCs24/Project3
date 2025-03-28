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
#include <algorithm>
#include <cstdlib>
#include <random>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <algorithm>
#include <chrono>
#include <ctime>
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
//  void printDeck(); // FUNCTION TO TEST DELETE AFTER USE
};

#endif