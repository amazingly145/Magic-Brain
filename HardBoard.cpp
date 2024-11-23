#include "HardBoard.h"

// Constructor por defecto que llama al constructor base de Board
HardBoard::HardBoard() : Board() {}

// Constructor parametrizado que inicializa los atributos usando el constructor de Board
HardBoard::HardBoard(int num_levelboard, string answer_board, int num_cards, string name, int score, string unanswer_board)
    : Board(num_levelboard, answer_board, num_cards, name, score, unanswer_board) {}

// Revela la carta en las coordenadas especificadas
string HardBoard::revealCard(int x, int y) {
    // Tablero de respuestas representado como un arreglo 2D
    char answer[2][3] = {{'A', 'B', 'C'}, {'C', 'A', 'B'}};

    // Devuelve el valor de la carta en las coordenadas dadas
    return string(1, answer[x][y]);
}

// Actualiza el tablero visible en las coordenadas especificadas
void HardBoard::updateBoard(int x, int y, string card) {
    // Calcula el índice para actualizar el string unanswer_board
    int index = x * 6 + y * 2; // Mapea las coordenadas 2D al índice correspondiente del string
    if (index < unanswer_board.length()) {
        unanswer_board[index] = card[0]; // Actualiza el tablero con la carta revelada
    }
}
