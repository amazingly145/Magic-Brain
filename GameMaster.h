#include <string>
using namespace std;
#include <iostream>
#include "EasyBoard.cpp"
#include "HardBoard.cpp"
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
class GameMaster{
    //Atributos
    private:
        //Atributo de la propia clase.
        int player_decision;
        //Atributo de tipo composición de las subclases EasyBoard y HardBoard.
        HardBoard playmode_hardboard;
        EasyBoard playmode_easyboard;
    //Métodos
    public:
        //Constructores 
        GameMaster();
        GameMaster(int);
        //Métodos de tipo constructor
        int playmode_easyboard(int);
        int playmode_hardboard(int);
        void setPlayer_decision(int);
        int getPlayer_decision();
        void setPlay(int,int);    
};
#endif
