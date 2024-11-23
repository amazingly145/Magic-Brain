#include "Card.h"

// Constructor por defecto con los valores a inicializar
Card::Card() : symbol(""), side_x(0), side_y(0) {}

// Configurar los atributos para que se asignen los valores iniciales
Card::Card(string _symbol, int _side_x, int _side_y) 
    : symbol(_symbol), side_x(_side_x), side_y(_side_y) {}


// Métodos Setters

// Configurar el símbolo de la carta
void Card::setSymbol(string _symbol) {
    symbol = _symbol;
}

// Configurar la posición en x de la carta
void Card::setSide_x(int _side_x) {
    side_x = _side_x;
}

// Configurar la posición en y de la carta
void Card::setSide_y(int _side_y) {
    side_y = _side_y;
}

// Métodos Getters

// Obtener la posición en x de la carta
int Card::getSide_x() {
    return side_x;
}

// Obtener la posición en y de la carta
int Card::getSide_y() {
    return side_y;
}

// Obtener el símbolo de la carta
string Card::getSymbol() {
    return symbol;
}

// Obtener los datos de la carta
string Card::getCardData() {
    return "Card Symbol: " + symbol + " at (" + to_string(side_x) + ", " + to_string(side_y) + ")";
}
