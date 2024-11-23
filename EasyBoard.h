#include <string>
using namespace std;
#include <iostream>
#include "Board.h"
#include "Card.cpp"
#ifndef EASYBOARD_H
#define EASYBOARD_H
class EasyBoard : public Board{
    //Atributos protegidos que hereda de la clase padre (Board)
    protected:
        string equality_pair;
    public:
        EasyBoard();
        EasyBoard(int, string, int, string, string, int, string, int, int);
        getSide_x();
        //Getter
        string getEquality_pair();
        int getPlayer_card_1();
        int getPlayer_card_2();
};
#endif
