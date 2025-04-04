/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 10 minutes
Description: Card header file for the Card class that holds the function and attributes declarations
*/
#ifndef CARD_H
#define CARD_H

#include <string>
#include <sstream>
using namespace std;
class Card{
public:
    enum Color {purple,orange,black};
    Card() : rank(0), color(purple), value(0){};
    Card(int rank, Color color);
    string strCard();
    int getRank();
    Color getColor();
    int getValue();
private: 
    int rank;
    Color color;
    int value;
};
#endif