#include <string>
using namespace std;
#include <iostream>
#include "Board.h"
#include "Card.cpp"
#ifndef EASYBOARD_H
#define EASYBOARD_H
class EasyBoard : public Board{
    //Atributos protegidos que hereda de la clase padre (Board)
    //Hereda todos los atributos de la clase board
    protected:
        //Atribute of the class EasyBoard
        string equality_pair;
    public:
        //Constructor of the inherited attributes of superclass Board.
        EasyBoard(int, string, int, string, int, string);
        //Constructor of easyboard
        EasyBoard();
        //Setters
        void setDatalevel(int, string, int, string, int, string);
        //Getter
        string getEquality_pair();
        int getPlayer_card_1();
        int getPlayer_card_2();
        string getDatalevel();
};
#endif
