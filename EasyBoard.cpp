#include "EasyBoard.h"
#include "Board.h"
#include "Board.cpp"
#include "Card.cpp"
#include <string>
using namespace std;
#include <iostream>
EasyBoard::Board(int,string,string){
    Board _num_levelboard = 1;
    Board _name = "Easy Level"
    Board answer_board = string;
    Board unanswer_board = string;
}

EasyBoard::EasyBoard(int,string,string,string){
    void set_answer_board = string;
    string get_unawnsered_board;

}
EasyBoard::set_answer_board(string){
    void set_answer_board = 
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
EasyBoard::get_unawnsered_board(string){
    string get_unawnsered_board = 
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
        string matrixEasyBoard[2][2] = {{A,B},{B,A}};
        for (int i = 0; i<2, i++)
            for(int j = 0; j<2; j++){
                symbol = matrixEasyBoard[i][j];
                if card _x == 1 && card _y == 1{
                    "            1         2      \n"
                    "     ------------------------\n" 
                    "     |           |           |\n"
                    "  1  |     A     |           |\n"
                    "     |           |           |\n"
                    "     -------------------------\n" 
                    "     |           |           |\n"
                    "  2  |           |           |\n"
                    "     |           |           |\n"
                    "     ------------------------\n"};
                if card _x == 1 && card _y == 2{
                    "            1         2      \n"
                    "     ------------------------\n" 
                    "     |           |           |\n"
                    "  1  |           |    B      |\n"
                    "     |           |           |\n"
                    "     -------------------------\n" 
                    "     |           |           |\n"
                    "  2  |           |           |\n"
                    "     |           |           |\n"
                    "     ------------------------\n"};
                 if card _x == 2 && card _y == 1{
                    "            1         2      \n"
                    "     ------------------------\n" 
                    "     |           |           |\n"
                    "  1  |           |           |\n"
                    "     |           |           |\n"
                    "     -------------------------\n" 
                    "     |           |           |\n"
                    "  2  |     B     |           |\n"
                    "     |           |           |\n"
                    "     ------------------------\n"};
                 if card _x == 2 && card _y == 2;
                    "            1         2      \n"
                    "     ------------------------\n" 
                    "     |           |           |\n"
                    "  1  |           |           |\n"
                    "     |           |           |\n"
                    "     -------------------------\n" 
                    "     |           |           |\n"
                    "  2  |           |     B     |\n"
                    "     |           |           |\n"
                    "     ------------------------\n"    
            }
    return unanswered_board;
}
