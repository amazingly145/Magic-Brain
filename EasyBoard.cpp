#include "EasyBoard.h"
#include <string>
using namespace std;
#include <iostream>
//Inicializar los valores, con respecto a la super clase, board.
//En el constructor van los atributos con los qu va inicializar.
//Los parámetros que va a recibir en el main.
//Los nuevos atributos de la subclase Easyboard con referencia a board.
//default constructor to begin inheritance
//Begin the values of the number level, cards and name.
//Los atributos que se heredan de los hijos no tienes que especificar el tipo de variable.
//Se pone el tipo de retorno de los metódos del archivo .h
EasyBoard::EasyBoard(){
    equality_pair= "";
}
//Constructor con los valores de la clase padre de Board
EasyBoard::EasyBoard(int num_levelboard_, string answer_board_, int num_cards_, string name_, int score_, string unanswer_board_): Board(num_levelboard_, answer_board_, num_cards_,name_, score_, unanswer_board_){
    equality_pair = _equality_pair;
}
//Setters
//Los valores asignados a el nivel, correspondientes.
void EasyBoard::setDatalevel(int num_levelboard_, string answer_board_, int num_cards_, string name_, int score_, string unanswer_board_){
    num_levelboard_= 1;
    answer_board_ = "A B \nB A";
    num_cards_= 4;
    name_ = "EasyLevel";
    score_ = 0;
    unanswer_board_ = "* *\n* *";
}
//Getters
//Constructor of the moves of the player.
int EasyBoard::player_card_1(int side_x, int side_y) {
    if (side_x == 1 && side_y == 1) {
        string player_move_1 = "A *\n* *";
        int player_card_1 == 1;
        return player_card_1;
    }
    if (side_x == 1 && side_y == 2) {
        string player_move_1 = "* B\n* *";
        int player_card_1 == 2;
        return player_card_1;
    }
    return -1; // Valor por defecto en caso de error
}
int EasyBoard::player_card_2(int cards_x_, int cards_y_) {
    if (cards_x_.getSide_x_() == 2 && cards_y_.getSide_y_() == 1) {
        string player_move_2 = "* *\nB *"
        int player_card_2 == 1;
        return player_card_2;
    }
    if (cards_x_.getSide_x_() == 2 && cards_y_.getSide_y_() == 2) {
        string player_move_2 = "* *\n* A";
        int player_card_2 == 2;
        return player_card_2;
    }
    return -1; // Valor por defecto en caso de error
}
//Constructor getter de player_card_1.
string EasyBoard::getEquality_pair(int player_card_1, int player_card_2) {
    if (player_card_1 == 1 && player_card_2 == 2) {
        string pair = "A *\n* A";
        score_ += 1;
        return pair;
    }else{
        return "No match!";
    }
    if (player_card_1 == 2 && player_card_2 == 1) {
        string pair = "* B\nB *";
        score_ += 1;
        return pair;
    }else{
        return "No match!";
}
string EasyBoard::getLevelData(){
    string EasyBoardData = "Welcome to: " + name_ + "This is level: " + to_string(num_levelboard_) + "There are: " + to_string(num_cards_);
    return EasyBoardData;
}
}
