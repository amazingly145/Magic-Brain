
#include "Board.h"
#include "Card.h"
#include <iostream>
using namespace std;
#include <string>
Board::Board(int,int,string,string){
    int num_levboard = _num_levboard;
    string name_levboard;
    int score = _score;
    string answer_board = _anwer_board;
    string unanswer_board = _unanswer_board;
}
Board::Card(int, int){
    void set_side_x;
    void set_side_y;
}
Board:: setnum_levelboard(string,string){
    if (user == "1"){
        _num_levelboard = 1;
    };
    if (user == "2"){
        _num_levelboard = 2;
    };
}
Board::int setnum_cards(int,int){
    if (user == "1"){
        void _numcards = 4;
    };
    if (user == "2"){
        void _numcards = 6;
    };
}
Board::int setlevel(int,int){
    if (user == "1"){
        void setlevel = 1;
    };
    if (user == "2"){
        void setlevel = 2;
    }; 
}
Board::string getname(string,string){
    if (user == "1"){
        string getname() = "Easy Level";
    };
    if (user == "2"){
        string getname() = "Hard Level";
    };
}