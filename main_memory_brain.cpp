#include <iostream>
#include <string>
using namespace std;
#include "Card.h"
#include "Card.cpp"
#include "GameMaster.h"
#include "GameMaster.cpp"
int main(){
    score = 0;
    //inicializar las clases
    GameMaster gamemaster;
    //Itroducción al juego, explicación al jugador.
    cout<<"Hello, welcome to Memory Brain"<<endl;
    cout<<"Choose the level you would like to start with"<<endl;
    cout<<"Remember that each asterisc represents a card"<<endl;
    cout<<"We will start with the Easy level "<<endl;
    gamemaster.setPlaymode_easyboard(score);
    cin>>player_decision;
    gamemaster.setPlaymode_hardboard(score);
    cout<<player_decision.getPlay()<<endl; //Me va a llevar a los tableros vacíos.

    



    //Vamos a imprimir lo que va a poner el usuario como opción de tarjeta.

    //Llamar al método que me va a llevar al nivel que el jugador escoga.
    //Esto se va hacer a través del Board.
    //Si el jugador escogió uno se va a ir a EasyBoard y si escogió dos se va a ir a HardBoard.
}