#ifndef pawn_h
#define pawn_h
#include <string>
#include "Piece.h"
#include <iostream>
using namespace std;

class Pawn:public Piece{
public:
    Pawn();
    Pawn(string pos, COLOR c);
    char getGraphic();
private:
};

#endif