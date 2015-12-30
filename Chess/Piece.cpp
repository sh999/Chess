#include "Piece.h"
#include <iostream>
#include <string>
using namespace std;
Piece::Piece():pieceColor(WHITE){   // Base constructor sets color as white by default
    cout << "Default Piece constructor\n";

}

Piece::Piece(string pos, COLOR c){
    cout << "Piece constructor with position\n";
    currentPosition = pos;
    pieceColor = c;
    
}

Piece::Piece(string pos, COLOR c, int i):currentPosition(pos), pieceColor(c), pieceID(i) {
    cout << "Piece constructor with position and id\n";
    
}


void Piece::disp(){
    cout << "Current position = " << currentPosition << endl;
    cout << "Color = " << pieceColor << endl << "ID = " << pieceID;
    
}

int Piece::posToSquare(){
    /* 
     Convert position to integer representing square label
    Idea:
     Narrow by rank, then file
     rank 
        8 = [56...63]
        7 = [48...55]
        ...
        1 = [0...7]
     Then narrow by file
        add the appropriate integer
     e.g. position b7
        because it's 7, take number 48
        because it's b, square = 48 + 2 - 1 = 49
     */
    
    int rank = int(currentPosition[1])-48;
    int file = int(currentPosition[0])-97;
    int squareID;
    squareID = (8-rank)*8+file;
    cout << squareID;
    return squareID;
    
}



