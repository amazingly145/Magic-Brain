#include <string>
using namespace std;
#include <iostream>
#ifndef CARD_H
#define CARD_H
class Card{
    //Atributos.
    private:
        string symbol;
        int side_x;
        int side_y;
    //Métodos.
    public:
        Card();
        Card(string symbol, int side_x,int side_y);
        int getSide_x( );
        int getSide_y( );
        void setSymbol(string);
};
#endif
