#include "Pawn.h"

using namespace std;
Pawn::Pawn(){
	/*
		Default constructor empty for now
	*/
	cout << "Pawn default constructor\n";
}
Pawn::Pawn(string pos, COLOR c){
	/*
		Give position and color for constructor
	*/
    cout << "Pawn (position, color) constructor \n";
    currentPosition = pos;
    pieceColor = c;
    graphic = 'P';
}

char Pawn::getGraphic(){
	/*
		A graphic is the car representation of the obj.
	*/
    cout << "Pawn's graphic = " << graphic << endl;
    return graphic;
}
