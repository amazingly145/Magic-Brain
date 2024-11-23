#include <iostream>
#include <string>
#include "GameMaster.h"

using namespace std;

int main() {
    while (true) {
        // Inicializar variables
        int score = 0;
        int player_decision;
        
        // Inicalizar el objeto GameMaster
        GameMaster gamemaster;

        // Introducción al juego, explicación al jugador
        cout << "Hello, welcome to Memory Brain" << endl;
        cout << "Choose the level you would like to start with:" << endl;
        cout << "1. Easy Level" << endl;
        cout << "2. Hard Level" << endl;
        cout << "Enter your choice (1 or 2): ";

        // Elección del jugador de dificultad.
        //     1. Easy Level
        //     2. Hard Level
        // Si el jugador elige una opción inválida, el juego se cierra
        cin >> player_decision;

        if (player_decision == 1) {
            gamemaster.setPlaymodeEasyboard(score);
        } else if (player_decision == 2) {
            gamemaster.setPlaymodeHardboard(score);
        } else {
            cout << "Invalid choice. Exiting the game." << endl;
            break;
        }

        // Loop para continuar turnos hasta que el juego esté completo (todas las cartas reveladas)
        while (!gamemaster.isGameComplete(player_decision)) {
            // Variables para guardar las coordenadas de las 2 cartas seleccionadas por el jugador
            int x1, y1, x2, y2;

            // Pedir al jugador las coordenadas de las cartas
            cout << "\nChoose the first card (x, y): ";
            cin >> x1 >> y1;
            cout << "Choose the second card (x, y): ";
            cin >> x2 >> y2;

            // Procesar el movimiento del jugador y mostrar el resultado
            string result = gamemaster.processMove(player_decision, x1, y1, x2, y2, score);
            cout << result << endl;
            cout << "\nUpdated Board:" << endl;
            gamemaster.displayBoard(player_decision);

            // Mostrar la puntuación actual del jugador
            cout << "Current Score: " << score << endl;
        }
        // Mostrar mensaje de juego completado al jugador
        cout << "Congratulations! You've revealed all the cards!\n" << endl;
    }

    return 0;
}

    



    //Vamos a imprimir lo que va a poner el usuario como opción de tarjeta.

    //Llamar al método que me va a llevar al nivel que el jugador escoga.
    //Esto se va hacer a través del Board.
    //Si el jugador escogió uno se va a ir a EasyBoard y si escogió dos se va a ir a HardBoard.
}
