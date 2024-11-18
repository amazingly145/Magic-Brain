#include <string>
using namespace std;
#include <iostream>
#ifndef HARDBOARD_H
#define HARDBOARD_H
class HardBoard(){
    public:
        HardBoard(int,string, string, string);
        void setis_a_winner(int);
        void setanwer_board(string);
        string getunawnsered_board();
};
#endif