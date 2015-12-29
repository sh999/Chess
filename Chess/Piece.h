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
    Piece(string pos, COLOR c);   // Constructor with position parameter
    void move(string m);          // m is destination square. e.g.: e3
                                  // Each piece has unique move function
    void captured();              // Called when piece is captured; same for all piece types
    void disp();                  // Print current position and color

private:
    string name;
    string currentPosition; // Standard file/rank. e.g.: c6
    COLOR pieceColor;       // 0 = White, 1 = Black
    
};


#endif
