#include "Board.h"

using namespace std;

Board::Board(){
    cout << "Base Board constructor\n";
    for(int i = 0; i < 64; i++){
        // Empty square represented as ' '
        // cout << "Drawing empty space..\n";
    	squares[i] = ' ';
    }
}

Board::Board(Positions pos){
    /*
        Board constructor with positions
    */
    cout << "Alternate Board constructor\n";
    for(int i = 0; i < 64; i++){
        // Empty square represented as ' '
        // cout << "Drawing empty space..\n";
        squares[i] = ' ';
    }
    vector <Piece *> allPieces = pos.getPieces();
    for(size_t i = 0; i < allPieces.size(); i++){
        update(allPieces[i]);
    }
    cout << "POSITIONS SIZE = " << allPieces.size() << endl;

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
    	Update doesn't draw, but changes the underlying storage of what piece
         is held by what square
        Modifies squares[], which holds identity of what piece is on each square 
    */
    cout << "Calling board update\n";
    sqToModify = p->posToSquare();   // Call the piece's
    squares[sqToModify] = p->getGraphic();      // Currently can only draw Pawns
    //        squares[sqToModify] = 'o';      // Currently can only draw Pawns
}