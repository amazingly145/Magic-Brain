#include "Board.h"
#include "Card.h"
#include <iostream>
using namespace std;
#include <string>
//Son los valores con los que voy a inicializar mi clase.
Board::Board(){
    num_levelboard = 0;
    answer_board = "";
    num_cards = 0;
    matriz_board = "";
    name = "";
    score = 0;
    unanswer_board = "";
    //Constructo de cartas
    cards_x.getSide_x();
    cards_y.getSide_y();
}
//Configurar los métodos para que esten asignados a un valor.
Board::Board(int _num_levelboard, string _answer_board, int _num_cards, string _matriz_board, string _name, int _score, string _unanswer_board){
    //Falta agregar el constructor de cartas 
    //Setters.
    num_levelboard = _num_levelboard;
    answer_board = _answer_board;
    num_cards = _num_cards;
    matriz_board = _matriz_board;
    //Getters
    name = _name;
    score = _score;
    unanswer_board = _unanswer_board;
}
//Métodos Setters
//Número de nivel, recibe dependiendo si es easy o hard 
void Board::setNum_levelboard(int setNum_levelboard){
    num_levelboard = setNum_levelboard;
} //Adentro de los paréntesis van los parámetros que va poner el usuario, por eso se igual a num_levboard.
//Es la respuesta del tablero, el cual depende del nivel.
void Board::setAnswer_board(string setAnswer_board){
    answer_board = setAnswer_board;
}
//Número de cartas que va tener el tablero dependiendo del nivel.
void Board::setNum_cards(int setNum_cards){
    num_cards = setNum_cards;
}
//Matriz con la respuesta del tablero dependiendo del nivel.
void Board::setMatriz_board(string setMatriz_board){
    matriz_board = setMatriz_board;
}
//Métodos getters.
//Método nombre del tablero.
string Board::getName( ){
    return "Level name:" + name;
}
//Método score
int Board::getScore(){
    return score;
}
//Método Unanswer_board
string Board::getUnanswer_board(){
    return unanswer_board;
}
//Métodos de clase carta.
//Método de composición del tipo carta.
//Valor que pondrá el jugador de la carta en x.
int Board::getSide_x(){
    return cards_x.getSide_x();
}
//Valor que pondrá el jugador de la carta en y
int Board::getSide_y(){
    return cards_y.getSide_y();
}
