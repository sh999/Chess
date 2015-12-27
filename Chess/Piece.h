#ifndef Chess_Piece_h
#define Chess_Piece_h

#include <iostream>
#include <string>
using namespace std;

/*
 Base class for the 9 chess pieces
 */


class Piece{
public:
    Piece();
    Piece(string pos);   // Constructor with position parameter
    void move(string m); // m is destination square. e.g.: e3
                         // Each piece has unique move function
    void captured(); // Called when piece is captured; same for all
    void dispPosition(); // Print current position
private:
    string name;
    string currentPosition; // Standard file/rank. e.g.: c6
    
};


#endif
