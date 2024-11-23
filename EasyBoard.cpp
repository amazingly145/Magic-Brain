#include "EasyBoard.h"

// Constructor por defecto con los valores a inicializar
EasyBoard::EasyBoard() : Board() {}

// Configurar los atributos para que se asignen los valores iniciales
EasyBoard::EasyBoard(int num_levelboard, string answer_board, int num_cards, 
                     string name, int score, string unanswer_board)
    : Board(num_levelboard, answer_board, num_cards, name, score, unanswer_board) {}

// Método para revelar la carta en las coordenadas dadas
string EasyBoard::revealCard(int x, int y) {
    // Definir la tabla de respuestas como una matriz 2D 
    char answer[2][2] = {{'A', 'B'}, {'B', 'A'}};
    return string(1, answer[x][y]);
}

// Método para actualizar la tabla de cartas sin responder con la carta revelada
void EasyBoard::updateBoard(int x, int y, string card) {
    // Actualizar la tabla de cartas sin responder en la posición apropiada
    int index = x * 4 + y * 2;
    if (index < unanswer_board.length()) {
        unanswer_board[index] = card[0];
    }
}
