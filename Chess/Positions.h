#ifndef positions_h
#define positions_h
#include <string>
#include <iostream>
#include <vector>
#include "Piece.h"
#include "Board.h"
#include "Pawn.h"
#include "Rook.h"
using namespace std;
class Positions{
/*
 Summary:
 =======
 Parses FEN-type notation for setting position of pieces
 See: https://en.wikipedia.org/wiki/Forsyth%E2%80%93Edwards_Notation#Definition
 e.g. normal starting chess position is given by:
     rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1
 I will implement the string of pieces and not the things after 'w', which are extra information
 for a complete game. For now, just parse the string to set a normal table

 Input:
 =====
    FEN-type string such as 
 		rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR
    letters represent piece type (obvious). Numbers are # of empty squares
    '/' separates ranks. Start at 8th rank. Lowercase letters are black pieces
 */

public:
    Positions();
    Positions(string inputPositions); // Positions is a FEN-like string to   
    				      // describe piece position. Here, the constructor parses it and
    				      // creates Piece objects that are put in allPieces vector of pieces */
    vector<Piece*> getPieces();
    void sendPiecesToBoard(Board &b); // After creating pieces, send information to board
    Piece* getOnePiece();
private:
    vector<Piece *> allPieces;	      // Holds all created pieces
    string squareToPos(int i);	      // Converts square ID (0-62) to position string (e.g. e2)
    vector<Piece *> parsePositions(string fenInput);    // Called by constructor to parse input string positions
};

#endif
