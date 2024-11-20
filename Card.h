#include <iostream>
#ifndef CARD_H
#define CARD_H
class Card(){
    private:
        array symbol;
        int side_x;
        int side_y;

    public:
        Card(string,int,int);
        void setSide_x(int);
        void setSide_y(int);
        array setSymbol(string);
};
#endif
