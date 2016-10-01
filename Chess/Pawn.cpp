#include "Pawn.h"

using namespace std;
Pawn::Pawn(){
	cout << "Pawn default constructor\n";
}
Pawn::Pawn(string pos, COLOR c){
    cout << "Pawn (position, color) constructor \n";
    currentPosition = pos;
    pieceColor = c;
    graphic = 'P';
}

char Pawn::getGraphic(){
    cout << "Pawn's graphic = " << graphic << endl;
    return graphic;
}
