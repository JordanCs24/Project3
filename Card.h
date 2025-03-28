/*
My Name: Jordan Sowell
Section: CPSC 1020
Date:
Time:
Description: 
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
/* friend std::ostream& operator<<(std::ostream& os, const Card& card) {
        os << card.rank << " of " << card.color;
        return os;
    }
*/
};
#endif