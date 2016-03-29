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
     Draws board
     
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

void Board::update(Piece *p){
    /*
     Modifies squares[], which holds identity of what piece is on each square 
     */

    cout << "Calling board update\n";
    sqToModify = p->posToSquare();   // Call the piece's
    
    squares[sqToModify] = p->getGraphic();      // Currently can only draw Pawns

    //        squares[sqToModify] = 'o';      // Currently can only draw Pawns
}


