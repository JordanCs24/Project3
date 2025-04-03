/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
*/
#ifndef PLAYER_H
#define PLAYER_H
#include "Hand.h"


class Player{
public:
/*
    Each player, computer and human, will be represented by an object of class
    Player in TigerGame. This class has two public member variables: an object of
    type Hand and an integer score . Member hand is an object of class Hand because
    each player has a hand of cards. Use score to keep track of a player’s current
    score. 
    Initialize this variable to 0 using in-class initialization.
    Player has a parameterized constructor, which you will use to initialize hand .
    When called, this constructor will create an instance of Player with N cards in
    their hand. Note that this constructor is similar to the Hand constructor
*/
    Hand hand;
    int score;
    Player() : score(0){};
    Player(Deck deck, int N) : hand(deck,N), score(0){};
};
#endif