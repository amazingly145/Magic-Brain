#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

// Clase Card
class Card {
// Atributos
private:
    // Atributos de la clase
    string symbol;
    int side_x;
    int side_y;
// Métodos
public:
    // Constructores
    Card();
    Card(string symbol, int side_x, int side_y);
    // Métodos Setters  
    void setSymbol(string symbol);
    void setSide_x(int side_x);
    void setSide_y(int side_y);
    // Métodos Getters
    int getSide_x();
    int getSide_y();
    string getSymbol();
    string getCardData();
};

#endif

