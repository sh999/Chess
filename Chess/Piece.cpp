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
    cout << "Color = " << pieceColor;
}

