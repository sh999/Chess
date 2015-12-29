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

void Piece::disp(){
    cout << "Current position = " << currentPosition << endl;
    cout << "Color = " << pieceColor << endl;
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
    int square;
    if (rank == 1){
        square = 56;
    }
    else if(rank == 2){
        square = 48;
    }
    else if(rank == 3){
        square = 40;
    }
    else if(rank == 4){
        square = 32;
    }
    else if(rank == 5){
        square = 24;
    }
    else if(rank == 6){
        square = 16;
    }
    else if(rank == 7){
        square = 8;
    }
    else if(rank == 8){
        square = 0;
    }
    square = square + (int(currentPosition[0]) - 97);
    cout << "square = " << square << endl;

    return square;
}

