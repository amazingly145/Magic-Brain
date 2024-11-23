#include "Card.h"
#include <iostream>
using namespace std;
#include <string>

Card::Card(){
    symbol = "";
    side_x = 0;
    side_y = 0;
}
Card::Card(string _symbol,int _side_x, int _side_y){
    symbol = _symbol;
    side_x = _side_x;
    side_y = _side_y;
}
//Métodos setters
void Card::setSymbol(string _symbol){
    symbol=_symbol;
}
void Card::setSide_x(int _side_x){
    side_x = _side_x;
}
void Card::setSide_y(int _side_y){
    side_y = _side_y;
}
//Métodos getters
int Card::getSide_x(){
    return side_x;
}
int Card::getSide_y(){
    return side_y;
}
string Card::getCardData(){
    string CardData = "Card in side x: " + to_string(side_x) +
    "Card in side y:" + to_string(side_y);
    return CardData;
}
