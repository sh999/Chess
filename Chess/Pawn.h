#ifndef pawn_h
#define pawn_h
#include <string>
#include "Piece.h"
using namespace std;

class Pawn:public Piece{
public:
    Pawn();
    Pawn(string pos, COLOR c);
private:
    
};

#endif