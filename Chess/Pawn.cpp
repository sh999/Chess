#include "Pawn.h"
//#include "Piece.h"
#include <iostream>

using namespace std;
Pawn::Pawn(){
	cout << "Pawn default constructor\n";
}
Pawn::Pawn(string pos, COLOR c){
    cout << "Pawn (position, color) constructor \n";
    currentPosition = pos;
    pieceColor = c;
    graphic = 'o';
//    Piece::Piece(pos, c);
}

char Pawn::getGraphic(){
    cout << "Pawn's graphic = " << graphic << endl;
    return graphic;
}
