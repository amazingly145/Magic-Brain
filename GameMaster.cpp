#include "GameMaster.h"
#include "EasyBoard.h"
#include "HardBoard.h"
#include "Board.h"
#include <iostream>
using namespace std;
#include <string>
GameMaster::GameMaster(HardBoard){
    HardBoard(hardboard);
    EasyBoard(easyboard);
    int score = _score;
}
GameMaster::GameMaster(int){
    int GameMaster;
}
GameMaster::setshuffle_cards(random){
    setshuffle_cards = random;
}
GameMaster::void setstart_game(bool){
    if (user=="start"){
        bool start_game = true;
    }
}
GameMaster::int getincrementscore(){
    int max_score = 6;
}
GameMaster::bool getequality_card(){
    if (answerboard == unanswered_board){
        return true;
    }
}
GameMaster::int getchoose_level(){
    if (int user == 1){
        EasyBoard();
    }
    if (int user == 2){
        HardBoard();
    }
}
