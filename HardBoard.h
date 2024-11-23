#include <string>
#include "Board.h"
#include "Card.h"
using namespace std;
#include <iostream>
#ifndef HARDBOARD_H
#define HARDBOARD_H
class HardBoard : public Board{
    //Atributos que van a heredar
    protected:
        string equality_pair;
    public:
        HardBoard(int, string, int, string, int, string);
        HardBoard();
        void setDatalevel(int, string, int, string, int, string);
        string getEquality_pair();
        int getPlayer_card_1();
        int getPlayer_card_2();
        string getDatalevel();
};
#endif
