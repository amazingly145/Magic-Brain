//Library names
#ifndef CARD_H
#define CARD_H
#include "Card.cpp"

#include <string>
using namespace std;
#include <iostream>

//Class definition
class Card{
    //Atributos.
    private:
        string symbol;
        int side_x;
        int side_y;
    //Métodos.
    public:
        //Constructores
        Card();
        Card(string symbol, int side_x,int side_y);
        //Getteres
        int getSide_x( );
        int getSide_y( );
        string getCardData();
        //Setters
        void setSide_x(int);
        void setSide_y(int);
        void setSymbol(string);
};
#endif
