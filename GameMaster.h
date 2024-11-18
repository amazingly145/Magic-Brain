#include <string>
using namespace std;
#include <iostream>
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
class GameMaster(){
    public:
       hardboard(HardBoard);
       easyboard(EasyBoard);
    private:
        string Card(int,int);
        bool GameMaster();
        void setShuffle_card(random);
        void setStart_game(bool);
        int getScore();
        bool getequailty_card();
        int getchoose_level();
};
#endif