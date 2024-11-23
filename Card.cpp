#include "Card.h"
#include <iostream>
using namespace std;
#include <string>
Card::Card(){
    side_x = 0;
    side_y = 0;
}
Card::Card(string _symbol,int _side_x, int _side_y){
    symbol = _symbol;
    side_x = _side_x;
    side_y = _side_y;
}
//Revisar si quitar
//Métodos setters
void Card::setSymbol(string _symbol){
    symbol=_symbol;
}
//Métodos getters
int Card::getSide_x(){
    return side_x;
}
int Card::getSide_y(){
    return side_y;
}
