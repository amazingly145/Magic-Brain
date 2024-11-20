#include <string>
using namespace std;
#include <iostream>
#ifndef EASYBOARD_H
#define EASYBOARD_H
class EasyBoard(){
    public:
        EasyBoard(int,string, string, string);
        void setis_a_winner(int);
        void setanwer_board(string);
        string getunawnsered_board();
};
#endif
