#include "Board.h"
#include "Piece.h"
#include "PiecePositions.h"
#include <iostream>
using namespace std;
Board::Board(){
    cout << "Base Board constructor\n";
    for(int i = 0; i < 64; i++){
        // Empty square represented as ' '
    	squares[i] = ' ';
    }
}

void Board::draw(){
    /*
     Draw board
     Each square is filled with a character depending on piece identity
     Each square's char data stored in squares[]
     Values are modified by Board::update()
     */
    cout << "Drawing board\n";
    cout <<  " _ _ _ _ _ _ _ _\n";
    for(int i = 0; i < 64; i++){
        // Draw board and create new line after 8 squares
        // Display appropriate piece based on squares array
        cout << "|";
        if (squares[i] == ' '){
            cout << "_";
        }
    	else cout << squares[i];
        if ((i + 1) % 8 == 0){
            cout << "|" << endl;
        }
    }
}
void Board::update(Piece &p){
    /*
     Modifies squares[], which holds identity of what piece is on each square 
     */
    sqToModify = p.posToSquare();   // Call the piece's
    squares[sqToModify] = 'P';      // Currently can only draw Pawns

    
}

void Board::updateMultiple(PiecePositions &pp){
    /*
     Updates board with multiple piece position info
     At the start of the game, a string is provided (FEN-like format)
     and is stored as a PiecePosition object, which parses the string
     and creates Piece objects stored in a vector within PiecePositions
     
     Do this in PiecePosition instead?
     */
}
/*
Rough draft of what board should look like
 _ _ _ _ _ _ _ _
|_|_|_|_|_|_|_|_|
|_|_|_|_|_|_|_|_|
*/