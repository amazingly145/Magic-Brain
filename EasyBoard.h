#ifndef EASYBOARD_H
#define EASYBOARD_H

#include "Board.h"
#include <string>
using namespace std;

// Clase EasyBoard
class EasyBoard : public Board {
public:
    EasyBoard();
    EasyBoard(int num_levelboard, string answer_board, int num_cards, string name, int score, string unanswer_board);

    string revealCard(int x, int y); // Reveals the card at given coordinates
    void updateBoard(int x, int y, string card); // Updates the unanswer_board with the revealed card
};

#endif
