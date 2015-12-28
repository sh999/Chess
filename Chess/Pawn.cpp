#include "Pawn.h"
//#include "Piece.h"
#include <iostream>

using namespace std;
Pawn::Pawn(){
	cout << "Pawn default constructor\n";
}
Pawn::Pawn(string pos, COLOR c):Piece(pos, c){
    cout << "Pawn (position, color) constructor \n";
//    Piece::Piece(pos, c);
}
