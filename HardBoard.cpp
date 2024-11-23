#include "HardBoard.h"
#include "Board.h"
#include "Board.cpp"
#include "Card.cpp"
#include <string>
using namespace std;
#include <iostream>
Hardboard::Hardboard(){
    equality_pair= "";
}
//Constructor con los valores de la clase padre de Board
HardBoard::HardBoard(int num_levelboard_, string answer_board_, int num_cards_, string name_, int score_, string unanswer_board_): Board(num_levelboard_, answer_board_, num_cards_,name_, score_, unanswer_board_){
    equality_pair = _equality_pair;
}
//Setters
//Los valores asignados a el nivel, correspondientes.
void HardBoard::setDatalevel(int num_levelboard_, string answer_board_, int num_cards_, string name_, int score_, string unanswer_board_){
    num_levelboard_= 2;
    answer_board_ = "A B C \nB C A";
    num_cards_= 6;
    name_ = "HardLevel";
    score_ = 0;
    unanswer_board_ = "* * *\n* * *";
}
//Getters
//Agregar player card_1 y 2
int Hardboard::getPlayer_card_1(int side_x, int side_y){
    if (cards_x.getSide_x_() == 1 && cards_y.getSide_y_() == 1){
        string player_move_1 = "A * *\n * * *";
        int player_card_1 == 1;
        return player_card_1;
        }
    if (cards_x.getSide_x_() == 1 && cards_y.getSide_y_() == 2){
        string player_move_1 = "* B *\n * * *";
        int player_card_1 == 2;
        return player_card_1;
        } 
    if (cards_x.getSide_x_() == 1 && cards_y.getSide_y_() == 3){
        string player_move_1 = "* * C\n* * *"; 
        int player_card_1=3;
        return player_card_1;}
}
int Hardboard::getPlayer_card_2(int side_x, int side_y){
    if (cards_x.getSide_x_() == 2 && cards_y.getSide_y_() == 1){
        string player_move_1 = "* * *\nB * *"; 
        int player_card_2=1;
        return player_card_2;}
    if (cards_x.getSide_x_() ==  2 && cards_y.getSide_y_() == 2){
        string player_move_1 = "* * *\n* C *"; 
        int player_card_2=2;
        return player_card_2;}
    if (cards_x.getSide_x_() == 2 && cards_y.getSide_y_() == 3){
        string player_move_1 = "* * *\n* * A"; 
        int player_card_2=3;
        return player_card_2;}
}
//Método de la igualdad de las cartas
//Constructor getter de player_card_1.
string HardBoard::getEquality_pair(int player_card_1, int player_card_2) {
    if (player_card_1 == 1 && player_card_2 == 3) {
        string pair = "A * *\n* * A";
        score += 1
        return pair;
    }else{
        return "No match!";
    }
    if (player_card_1 == 2 && player_card_2 == 1) {
        string pair = "* B *\nB * *";
        score += 1
        return pair;
    }else{
        return "No match!";
    }
    if (player_card_1 == 3 && _player_card_2 == 2){
        string pair = "* * C\n* C *";
        score += 1
        return pair;
    }else{
        return "No match!";
    }
}
string HardBoard::getLevelData(){
    string HardBoardData = "Welcome to: " + name_ + "This is level: " + to_string(num_levelboard_) + "There are: " + to_string(num_cards_);
    return HardBoardData;
}
