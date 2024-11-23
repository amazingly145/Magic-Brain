#include "GameMaster.h"
#include <iostream>
using namespace std;

// Constructor por defecto para inicializar un GameMaster
GameMaster::GameMaster() {}

// Configurar el modo de juego con tablero fácil y mostrarlo
void GameMaster::setPlaymodeEasyboard(int &score) {
    cout << "Easy Level Selected" << endl;
    // Inicializa el tablero fácil con los valores específicos del nivel fácil
    easyBoard = EasyBoard(1, "A B\nB A", 4, "Easy Level", score, "* *\n* *");
    // Muestra el tablero inicial
    displayBoard(1);
}

// Configurar el modo de juego con tablero difícil y mostrarlo
void GameMaster::setPlaymodeHardboard(int &score) {
    cout << "Hard Level Selected" << endl;
    // Inicializa el tablero difícil con los valores específicos del nivel difícil
    hardBoard = HardBoard(2, "A B C\nC A B", 6, "Hard Level", score, "* * *\n* * *");
    // Muestra el tablero inicial
    displayBoard(2);
}

// Procesar un movimiento del jugador y devolver el resultado
string GameMaster::processMove(int level, int x1, int y1, int x2, int y2, int &score) {
    string card1, card2, result;

    // Procesar el movimiento para el nivel fácil
    if (level == 1) {
        // Revela las cartas seleccionadas en el tablero fácil
        card1 = easyBoard.revealCard(x1, y1);
        card2 = easyBoard.revealCard(x2, y2);

        // Verifica si las coordenadas son inválidas
        if (card1 == "Invalid coordinates!" || card2 == "Invalid coordinates!") {
            return "Invalid coordinates! Try again.";
        }
        // Verifica si se seleccionó la misma carta dos veces
        if (x1 == x2 && y1 == y2) {
            return "Invalid Move: Cannot pick the same card twice!";
        }

        // Verifica si las cartas coinciden
        if (card1 == card2) {
            result = "Revealing card at (" + to_string(x1) + ", " + to_string(y1) + "): " + card1 +
                     " and (" + to_string(x2) + ", " + to_string(y2) + "): " + card2 + " -> Match Found!";
            score++;

            // Actualiza el tablero para reflejar el emparejamiento encontrado
            easyBoard.updateBoard(x1, y1, card1);
            easyBoard.updateBoard(x2, y2, card2);
        } else {
            result = "Revealing card at (" + to_string(x1) + ", " + to_string(y1) + "): " + card1 +
                     " and (" + to_string(x2) + ", " + to_string(y2) + "): " + card2 + " -> No Match!";
        }
    }
    // Procesar el movimiento para el nivel difícil
    else if (level == 2) {
        // Revela las cartas seleccionadas en el tablero difícil
        card1 = hardBoard.revealCard(x1, y1);
        card2 = hardBoard.revealCard(x2, y2);

        // Verifica si las coordenadas son inválidas
        if (card1 == "Invalid coordinates!" || card2 == "Invalid coordinates!") {
            return "Invalid coordinates! Try again.";
        }
        // Verifica si se seleccionó la misma carta dos veces
        if (x1 == x2 && y1 == y2) {
            return "Invalid Move: Cannot pick the same card twice!";
        }

        // Verifica si las cartas coinciden
        if (card1 == card2) {
            result = "Revealing card at (" + to_string(x1) + ", " + to_string(y1) + "): " + card1 +
                     " and (" + to_string(x2) + ", " + to_string(y2) + "): " + card2 + " -> Match Found!";
            score++;

            // Actualiza el tablero para reflejar el emparejamiento encontrado
            hardBoard.updateBoard(x1, y1, card1);
            hardBoard.updateBoard(x2, y2, card2);
        } else {
            result = "Revealing card at (" + to_string(x1) + ", " + to_string(y1) + "): " + card1 +
                     " and (" + to_string(x2) + ", " + to_string(y2) + "): " + card2 + " -> No Match!";
        }
    }
    // Verifica si el nivel seleccionado es inválido
    else {
        return "Invalid level!";
    }

    return result;
}

// Mostrar el tablero actual basado en el nivel
void GameMaster::displayBoard(int level) {
    if (level == 1) {
        // Muestra el tablero sin responder para el nivel fácil
        cout << easyBoard.getUnanswer_board() << endl;
    } else if (level == 2) {
        // Muestra el tablero sin responder para el nivel difícil
        cout << hardBoard.getUnanswer_board() << endl;
    }
}

// Verificar si el juego está completo basado en el nivel
bool GameMaster::isGameComplete(int level) {
    if (level == 1) {
        // Comprueba si el tablero fácil ya no tiene '*'
        return easyBoard.getUnanswer_board().find('*') == string::npos;
    } else if (level == 2) {
        // Comprueba si el tablero difícil ya no tiene '*'
        return hardBoard.getUnanswer_board().find('*') == string::npos;
    }
    return false;
}
