#include "Board.h"
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
void Board::update(Piece &p ){
    sqToModify = p.posToSquare();   // Call the piece's 
    squares[sqToModify] = 'P';
    /*
     Update board with piece information
     */
    
}
/*
Rough draft of what board should look like
 _ _ _ _ _ _ _ _
|_|_|_|_|_|_|_|_|
|_|_|_|_|_|_|_|_|
*/