#include "Board.h"

// Constructor por defecto con los valores a inicializar
Board::Board() 
    : num_levelboard(0), 
      answer_board(""), 
      num_cards(0), 
      name(""), 
      score(0), 
      unanswer_board("") 
{}

// Configurar los atributos para que se asignen los valores iniciales
Board::Board(int _num_levelboard, string _answer_board, int _num_cards, string _name, int _score, string _unanswer_board) 
    : num_levelboard(_num_levelboard), 
      answer_board(_answer_board), 
      num_cards(_num_cards), 
      name(_name), 
      score(_score), 
      unanswer_board(_unanswer_board) 
{}

// Métodos Setters

// Configurar el nivel de la tabla (1: Easy, 2: Hard)
void Board::setNum_levelboard(int _num_levelboard) {
    num_levelboard = _num_levelboard;
}

// Configurar la tabla de respuestas (cartas)
void Board::setAnswer_board(string _answer_board) {
    answer_board = _answer_board;
}

// Configurar el número de cartas en la tabla (Easy: 4, Hard: 6)
void Board::setNum_cards(int _num_cards) {
    num_cards = _num_cards;
}

// Métodos Getters

// Obtener el nombre del tablero
string Board::getName() {
    return name;
}

// Obtener la puntuación del jugador
int Board::getScore() {
    return score;
}

// Obtener la tabla de cartas sin responder
string Board::getUnanswer_board() {
    return unanswer_board;
}
