#include "Rook.h"
//#include "Piece.h"
#include <iostream>

using namespace std;
Rook::Rook(){
	cout << "Rook default constructor\n";
}
Rook::Rook(string pos, COLOR c){
    cout << "Rook (position, color) constructor \n";
    currentPosition = pos;
    pieceColor = c;
    graphic = 'R';
}

char Rook::getGraphic(){
    cout << "Rook's graphic = " << graphic << endl;
    return graphic;
}
