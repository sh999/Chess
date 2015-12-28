#include "Piece.h"
#include <iostream>
#include <string>
using namespace std;
Piece::Piece():pieceColor(WHITE){
    cout << "Default Piece constructor\n";
//    currentPosition = "null";

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

