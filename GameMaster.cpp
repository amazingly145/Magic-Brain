#include "GameMaster.h"
#include "EasyBoard.h"
#include "HardBoard.h"
#include "Card.h"
#include "Board.h"
#include <iostream>
using namespace std;
#include <string>
GameMaster::GameMaster(EasyBoard, HardBoard){
    HardBoard(hardboard);
    EasyBoard(easyboard);
    int score = _score;
    string player_move;
    bool equality_pair(string);
    int player_card_1;
    int player_card_2;
}
GameMaster::GameMaster(bool){
    int GameMaster;
    string player_move = _player_move;
    bool equality_pair = _equaliy_pair;
    _score = 0;
    player_card_1 = _player_card_1;
    player_card_2 = _player_card_2;
}
GameMaster::setshuffle_cards(random){
    setshuffle_cards = random;
}
GameMaster::_equailty_pair(string):EasyBoard(string unanswered_board){
    if int(_player_card_1 == 1 && _player_card_2 == 2){
        "            1         2      \n"
        "     ------------------------\n" 
        "     |           |           |\n"
        "  1  |     A     |           |\n"
        "     |           |           |\n"
        "     -------------------------\n" 
        "     |           |           |\n"
        "  2  |           |     A     |\n"
        "     |           |           |\n"
        "     ------------------------\n"
        _score +=1
    }
if int(_player_card_1 == 2 && _player_card_2 == 1){
        "            1         2      \n"
        "     ------------------------\n" 
        "     |           |           |\n"
        "  1  |           |    B      |\n"
        "     |           |           |\n"
        "     -------------------------\n" 
        "     |           |           |\n"
        "  2  |     B     |           |\n"
        "     |           |           |\n"
        "     ------------------------\n"
        _score +=1
    };
}
GameMaster::_equailty_pair(string):HardBoard(string unanswered_board){
    if int(_player_card_1 == 1 && _player_card_2 == 3){
        "        1             2           3     \n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  1 |    A      |           |          |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  2 |           |           |    A     |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n";
        _score +=1
    };
    if int(_player_card_1 == 2 && _player_card_2 == 1){
        "        1             2           3     \n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  1 |           |    B      |          |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  2 |    B      |           |          |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n";
        _score +=1
    };
    if int(_player_card_1 == 3 && _player_card_2 == 2){
        "        1             2           3     \n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  1 |           |           |    C     |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  2 |           |     C     |          |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n";
        _score +=1
    }
}
GameMaster::void setstart_game(bool){
    if (user=="start"){
        void start_game = true;
    }
}
GameMaster::int getincrementscore(){
    int max_score = 6;
    if EasyBoard(score = 2){
        score = True;
    }
    if HardBoard(score = 3){
        score = True;
    }
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
GameMaster::GameMaster(string player_move):Card(int _x, int_y):EasyBoard(){
    if Card(_x) == 1 && Card(_y) == 1{
        string player_move_1= 
            "            1         2      \n"
            "     ------------------------\n" 
            "     |           |           |\n"
            "  1  |     A     |           |\n"
            "     |           |           |\n"
            "     -------------------------\n" 
            "     |           |           |\n"
            "  2  |           |           |\n"
            "     |           |           |\n"
            "     ------------------------\n";
        player_card_1=1};
    if Card(_x) == 1 && Card(_y) == 2{
        string player_move_1= 
            "            1         2      \n"
            "     ------------------------\n" 
            "     |           |           |\n"
            "  1  |           |     B     |\n"
            "     |           |           |\n"
            "     -------------------------\n" 
            "     |           |           |\n"
            "  2  |           |           |\n"
            "     |           |           |\n"
            "     ------------------------\n";
        player_card_1=2};
    if Card(_x) == 2 && Card(_y) == 1{
        string player_move= 
            "            1         2      \n"
            "     ------------------------\n" 
            "     |           |           |\n"
            "  1  |           |           |\n"
            "     |           |           |\n"
            "     -------------------------\n" 
            "     |           |           |\n"
            "  2  |     B     |           |\n"
            "     |           |           |\n"
            "     ------------------------\n";
        player_card_2=1};
    if Card(_x) == 2 && Card(_y) == 2{
        string player_move = 
            "            1         2      \n"
            "     ------------------------\n" 
            "     |           |           |\n"
            "  1  |           |           |\n"
            "     |           |           |\n"
            "     -------------------------\n" 
            "     |           |           |\n"
            "  2  |           |     A     |\n"
            "     |           |           |\n"
            "     ------------------------\n";
        player_card_2=2};
}
GameMaster::GameMaster(string player_move):Card(int _x, int_y):HardBoard(){
    if Card(_x) == 1 && Card(_y) == 1{
        string player_move_1 = 
            "        1             2           3     \n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  1 |    A      |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  2 |           |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n";
        player_card_1=1};
    if Card(_x) == 1 && Card(_y) == 2{
        string player_move_1 = 
            "        1             2           3     \n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  1 |           |     B     |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  2 |           |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n";
        player_card_1=2};
    if Card(_x) == 1 && Card(_y) == 3{
        string player_move_1 = 
            "        1             2           3     \n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  1 |           |           |     C    |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  2 |           |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n";
        player_card_1=3};
    if Card(_x) == 1 && Card(_y) == 1{
        string player_move_1 = 
            "        1             2           3     \n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  1 |           |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  2 |     B     |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n";
        player_card_2=1};
    if Card(_x) == 1 && Card(_y) == 1{
        string player_move_1 = 
            "        1             2           3     \n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  1 |           |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  2 |           |     C     |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n";
        player_card_2=2};
    if Card(_x) == 1 && Card(_y) == 1{
        string player_move_1 = 
            "        1             2           3     \n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  1 |           |           |          |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n"
            "    |           |           |          |\n"
            "  2 |           |           |     A    |\n"
            "    |           |           |          |\n"
            "    ------------------------------------\n";
        player_card_2=3};
}
