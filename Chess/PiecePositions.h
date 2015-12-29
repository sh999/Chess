#ifndef piecepositions_h
#define piecepositions_h
#include <string>
#include <iostream>
#include <vector>
#include "Piece.h"
using namespace std;
class PiecePositions{
/*
 Parses FEN-type notation for setting position of pieces
 See: https://en.wikipedia.org/wiki/Forsyth%E2%80%93Edwards_Notation#Definition
 e.g. starting chess is given by:
     rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1
 I will implement the string of pieces and not the things after 'w', which are extra information
 for a complete game. For now, just parse the string to set a normal table

 Input:
    FEN-type string such as 
 rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR
    letters represent piece type (obvious). Numbers are # of empty squares
    '/' separates ranks. Start at 8th rank. Lowercase letters are black pieces

 */

public:
    PiecePositions();
    PiecePositions(string positions);
    vector<Piece> getPieces();
    
private:
    vector<Piece> allPieces;
};


#endif