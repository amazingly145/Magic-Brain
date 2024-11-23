#ifndef BOARD_H
#define BOARD_H

#include "Card.h"
#include <string>
using namespace std;

// Clase Board
class Board {
// Atributos
protected:
    // Atributos de la clase
    int num_levelboard;
    string answer_board;
    int num_cards;
    string name;
    int score;
    string unanswer_board;
// Métodos
public:
    // Constructores
    Board();
    Board(int num_levelboard, string answer_board, int num_cards, string name, int score, string unanswer_board);

    // Métodos Setters
    void setNum_levelboard(int num_levelboard);
    void setAnswer_board(string answer_board);
    void setNum_cards(int num_cards);
    
    // Métodos Getters
    string getName();
    int getScore();
    string getUnanswer_board();
};

#endif
