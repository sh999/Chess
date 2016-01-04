#ifndef rook_h
#define rook_h
#include <string>
#include "Piece.h"
using namespace std;

class Rook:public Piece{
public:
    Rook();
    Rook(string pos, COLOR c);
    char getGraphic();
private:
    
};

#endif