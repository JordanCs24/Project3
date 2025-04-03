/*
My Name: Jordan Sowell
Section: CPSC 1020
Date: 4/5/2025
Time: 1+ hours
Description: Card cpp file for the Card class that holds the function definitions
*/
#include "Card.h"

Card::Card(int rank, Color color){
    this->rank = rank;
    this->color = color;
    if (color == purple){
        value = rank;
    }
    else if (color == orange){
        value = rank * 2;
    }
    else if (color == black){
        value = rank * 3;
    }
}

string Card::strCard(){
    //use string stream to return a string
    stringstream ss;
    switch(color){
        case purple:
            ss << "purple" << ":" << rank;
            break;
        case orange:
            ss << "orange" << ":" << rank;
            break;
        case black:
            ss << "black" << ":" << rank;
            break;
        default:
            break;
    }
    return ss.str(); // returns the string put into the stream of ss
}
int Card::getRank(){
    return this->rank;
}
Card::Color Card::getColor(){
    return color;
}
int Card::getValue(){
    return this->value;
}

