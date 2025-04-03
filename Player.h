/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 2+ hours
Description: Header file for the player class which initializes it's type with the constructors
*/
#ifndef PLAYER_H
#define PLAYER_H
#include "Hand.h"


class Player{
public:
    Hand hand;
    int score;
    Player() : score(0){};
    Player(Deck deck, int N) : hand(deck,N), score(0){};
};
#endif