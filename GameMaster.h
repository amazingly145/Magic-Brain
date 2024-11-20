#include <string>
using namespace std;
#include <iostream>
#include "EasyBoard.cpp"
#include "HardBoard.cpp"
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
class GameMaster(){
    public:
       hardboard(HardBoard);
       easyboard(EasyBoard);
    private:
        string Card(int,int,array);
        GameMaster(bool);
        bool equality_pair(string);
        void setShuffle_card(random);
        void setStart_game(bool);
        int getincrement_score();
        bool getequailty_card();
        int getchoose_level();
};
#endif
