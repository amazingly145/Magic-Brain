#ifndef GAMEMASTER_H
#define GAMEMASTER_H

#include "EasyBoard.h"
#include "HardBoard.h"

class GameMaster {
private:
    EasyBoard easyBoard;
    HardBoard hardBoard;

public:
    GameMaster();
    void setPlaymodeEasyboard(int &score);
    void setPlaymodeHardboard(int &score);
    string processMove(int level, int x1, int y1, int x2, int y2, int &score);
    void displayBoard(int level);
    bool isGameComplete(int level); // Checks if all cards are revealed
};

#endif
