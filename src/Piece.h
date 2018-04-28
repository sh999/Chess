#ifndef Chess_Piece_h
#define Chess_Piece_h

#include <iostream>
#include <string>
using namespace std;

/*
 Base class for the 9 chess pieces
 */

enum COLOR{
    WHITE, BLACK    
};  

class Piece{
public:
    Piece();
    void move(string m);          // m is destination square. e.g.: e3
                                  // Each piece has unique move function
};
#endif
