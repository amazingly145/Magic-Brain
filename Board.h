//library names
#include <string>
#include <iostream>
using namespace std;
#include "Card.h"
#include "Card.cpp"
#include <iostream>
#ifndef BOARD_H
#define BOARD_H
//Class definition
class Board{
    protected:
        int num_levboard;
        int score;
        string name;
        int num_cards;
        string answer_board;
        string unanswered_board;
        card(Card);
    public:
        Board(int,int,string,string);
        string Card(int,int);
        int setnum_levelboard();
        int setlevel();
        int setnumber_cards();
        string getname();      
};
#endif
