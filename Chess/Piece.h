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
//    Piece(string pos, COLOR c, int i);
    void move(string m);          // m is destination square. e.g.: e3
                                  // Each piece has unique move function
    void captured();              // Called when piece is captured; same for all piece types
    void disp();                  // Print current position and color
    int posToSquare(); // Converts position to integer representing square
    // e.g. "a8" --> 1    "d2" --> 59    "h8 --> 63
    virtual char getGraphic();      // Graphic representation of piece
private:
    string name;
    int pieceID;             // For debugging purposes, simple integer id
protected:
    char graphic;
    string currentPosition; // Standard file/rank. e.g.: c6
    COLOR pieceColor;       // 0 = White, 1 = Black
};
#endif
