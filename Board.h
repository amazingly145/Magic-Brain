//library names
#ifndef BOARD_H
#define BOARD_H

#include <string>
using namespace std;
#include <iostream>
#include "Card.cpp"

//Class definition
class Board{
    //Atributos
    protected:
        //Setteres
        int num_levelboard;
        string answer_board;
        int num_cards;
        string matriz_board;
        //Getters
        string name;
        int score;
        string unanswer_board;
        //Composición de cards
        Card cards_x;
        Card cards_y;
    //Métodos 
    public:
        //Constructores
        Board();
        Board(int num_levelboard, string answer_board, int num_cards, string matriz_board, string name, int score, string unanswer_board);//Constructor de la clase Board o los atributos de la clase board
        //Composiciones de cards.
        string Card(int,int);
        //Setters
        void setNum_levelboard(int);
        void setAnswer_board(string);
        void setNum_cards(int);
        void setMatriz_board(string);
        //Getters
        string getName(); 
        int getScore();  
        string getUnanswer_board();
        int getSide_x();
        int getSide_y();   
};
#endif
