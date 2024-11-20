#include "HardBoard.h"
#include "Board.h"
#include "Board.cpp"
#include "Card.cpp"
#include <string>
using namespace std;
#include <iostream>
HardBoard::Board(int,string,string){
    Board _num_levelbard = 2;
    Board name = "Hard level";
    Board answer_board = string;
    Board unansweres_board = string;
}
HardBoard::HardBoard(int _num_levboard, string _name, string _answer_board,string _unanswered_board):Board( _num_levboard, _name, _num_cards, _answered_board, unanswered_board,score){
    void set_answer_board = string;
    string get_unawnsered_board = void;
    int score = 3;
}
HardBoard::Card(array _setsymbol){
    string matrixHardBoard[3][3] = {{A,B,C},{B,C,A}};
    for (int i = 0; i<2, i++)
            for(int j = 0; j<2; j++){
                symbol = matrixHardBoard[i][j];}
}
HardBoard::HardBoard(int,string,string,string){
    void set_answer_board = string;
    string get_unawnsered_board();
}
HardBoard::set_answer_board(string){
    void setanswer_board = 
        "         1           2           3      \n"
        "    ------------------------------------\n"
        "    |          |            |          |\n"
        "  1 |     A    |      B     |     C    |\n"
        "    |          |            |          |\n"
        "    ------------------------------------\n"
        "    |          |            |          |\n"
        "  2 |     B    |     C      |     A    |\n"
        "    |          |            |          |\n"
        "    ------------------------------------\n";
}
HardBoard::set_unanswer_board(string){
    string get_unanswerboard = 
        "        1             2           3     \n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  1 |           |           |          |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n"
        "    |           |           |          |\n"
        "  2 |           |           |          |\n"
        "    |           |           |          |\n"
        "    ------------------------------------\n";
    return = unanswerboard;
}
