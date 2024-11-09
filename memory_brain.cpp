# include <iostream>
# include <string>
# include "Level.cpp"
# include "Deckcards.cpp"
# include "Game_master.cpp"
# include "Player.cpp"
# include "Board.cpp"

using namespace std;

#ifndef LEVEL_H
#define LEVEL_H
class Level{
    private:
        string level_name;
    public:
        void Level(set_level);
        ///Aún faltan las subclasses
};
#endif
#include "Level.cpp"
Level::Level(){
    
}

#ifndef DECKCARDS_H
#define DECKCARDS_H
class Deckcards{
    private:
        int rectangle;
        bool flipped_down;
    public:
        void Deckcards(false);
        ///Aún faltan las subclasses
};
#endif
#include "Deckcards.h"
Deckcards::Deckcards(){
    radius=0;
}

#ifndef GAME_MASTER_H
#define GAME_MASTER_H
class Game_master{
    private:
        bool shuffle_cards;
    public:
        void Game_master(shuffle_cards);
        int Game_master(score);
        float Game_master(start_time);
        int Game_master(points_correct_pairs)
        ///Aún faltan las subclasses
};
#endif

#include "Game_master.h"
Game_master::Game_master(){

}

#ifndef PLAYER_H
#define PLAYER_H
class Player{
    public:
        string Player(choose_level); 
        bool Player(flip_card);
        ///Aún faltan las subclasses
};
#endif

#include "Player.h"
Player::Player(){

}

#ifndef BOARD_H
#define BOARD_H
class Board{
    private:
        bool cards;
        bool game_start;
        int shape;
    public:
        bool Board(game_start);
        int Board(set_score);
        bool Board(pair_cards);
};

#endif
#include "Board.h"
Board::Board(){

}
