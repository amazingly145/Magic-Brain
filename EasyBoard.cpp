#include "EasyBoard.h"
#include <string>
using namespace std;
#include <iostream>
//default constructor to begin inheritance
//Begin the values of the number level, cards and name.
//Los atributos que se heredan de los hijos no tienes que especificar el tipo de variable.
//Se pone el tipo de retorno de los metódos del archivo .h
EasyBoard::EasyBoard():Board(){
    score = 0;
    equality_pair= "";
    EasyBoard.getSide_x(player_move_x);

}
//Inicializar los valores, con respecto a la super clase, board.
//En el constructor van los atributos con los qu va inicializar.
//Los parámetros que va a recibir en el main.
EasyBoard::EasyBoard(int num_levelboard_, string answer_board_, int num_cards_, string matriz_board_, string name_, int score_, string unanswer_board_, int side_x_, int side_y_): Board(num_levelboard_, answer_board_, num_cards_, matriz_board_, name_, score_, unanswer_board_, side_x_, side_y_){
    equality_pair = _equality_pair;
    
}
int EasyBoard::getNum_level_board_(){
    return num_levelboard_= 1;
}
string EasyBoard::getAnswer_board_(){
    return answer_board_ = 
        "          1          2    \n"
        "     ---------------------\n"
        "     |          |         |\n"    
        "  1  |    A     |    B    |\n"
        "     |          |         |\n"
        "     ---------------------\n"
        "     |          |         |\n"    
        "  2  |     B    |    A    |\n"
        "     |          |         |\n"
        "     ---------------------\n";
}
int EasyBoard::getNum_cards_(){
    return num_cards_= 4;
}
string EasyBoard::getMatriz_board_(){
    return matriz_board_[2][2] = {{A,B},{B,A}};
}
string EasyBoard::getName_(){
    return name_ = "EasyLevel";
}
string EasyBoard::getUnanswer_board_(){
    return unanswer_board_ = 
    "          1          2    \n"
    "     ---------------------\n"
    "     |          |         |\n"    
    "  1  |          |         |\n"
    "     |          |         |\n"
    "     ---------------------\n"
    "     |          |         |\n"    
    "  2  |          |         |\n"
    "     |          |         |\n"
    "     ---------------------\n";
}
//Constructor of the moves of the player.
//Constructor getter de player_card_1.
int EasyBoard::getPlayer_card_1(){
    if (player_move_x == 1 && EasyBoard.getSide_y()== 1){
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
    if (EasyBoard.getside_x() == 1 && EasyBoard.getSide_y() == 2){
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
    return player_card_1;
}
int EasyBoard::getPlayer_card_2(){
    if (EasyBoard.getSide_x() == 2 && EasyBoard.getsSide_y() == 1){
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
    if (EasyBoard.getSide_x() == 2 && EasyBoard.getSide_y() == 2){
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
    return player_card_2;
}
string EasyBoard::getEquailty_pair(){
    //Mover todas las cosas de la clase de easyboard y hardboard
    //Agregarle métodos para cada tablero.
    if (int player_card_1 == 1 && int player_card_2 == 2){
        pair = 
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
            EasyBoard.getScore_ +=1
    }
    if (int player_card_1 == 2 && int player_card_2 == 1){
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
        getScore +=1
    };
}

string EasyBoard::getLevelData(){
    //getter con los datos
}
