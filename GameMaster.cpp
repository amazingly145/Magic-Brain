#include "GameMaster.h"
#include "Easyboard.h"
#include <iostream>
using namespace std;
#include <string>
GameMaster::GameMaster(){
    player_decision = 0;
}
GameMaster::GameMaster(int _player_decision){
    player_decision = _player_decision;
}
//Métodos setters
void GameMaster::setPlayer_decision(int _player_decision){
    //Si el usuario escoge 1, yo quiero asignarle el valor que me de.
    if (_player_decision == 1){
        easyboard.setNum_levelboard(1);
    }
    if (_player_decision == 2){
        hardboard.setNum_levelboard(2);
    }
}
int GameMaster::getPlayer_decision(){
    //Si el jugador escoge 1 o 2, quiero que imprime sus respectivos tableros.
    if (player_decision == 1){
        return easyboard.getUnanswer_board();
    }
    if (player_decision == 2){
        return hardboard.getUnanswer_board();
    }
}

void GameMaster::setPlaymode_easyboard(int score){
    score = 0;
    while (score>=0){
        easyboard.getLevelData();
        easyboard.getUnanswer_board();
        cout<<"Choose Card 1"<<endl;
        cout<<"Choose x axis"<<endl;
        int side_x;
        cin>>side_x;
        cout<<"Choose y axis"<<endl;
        int side_y;
        cin>>side_y;
        easyboard.getplayer_card_1(side_x,side_y)
        easyboard.getplayer_card_2(side_x,side_y)
        cout<<"Write your card in the y axis: "<<endl;
    }
}

void GameMaster::setPlaymodeEasyboard(int score){
    score = 0;
    while (score>=0){
        hardboard.getLevelData();
        hardboard.getUnanswer_board();
        cout<<"Choose Card 1"<<endl;
        cout<<"Choose x axis"<<endl;
        int side_x;
        cin>>side_x;
        cout<<"Choose y axis"<<endl;
        int side_y;
        cin>>side_y;
        easyboard.getplayer_card_1(side_x,side_y);
        easyboard.getplayer_card_2(side_x,side_y);
        cout<<"Write your card in the y axis: "<<endl;
        score += 1;
    }
}
int GameMaster::getPlay(){
    int score = 3
    while (score >= 3){
        if (_player_decision == 1){
            easyboard.getUnanswer_board();
            cout<<"Choose Card 1"<<endl;
            cout<<"Write your card in the x axis"<<endl;

        }
        return 
    }
}
