#include "PieceSetter.h"

void PieceSetter::sendPiecesToBoard(PiecePositions p, Board &b){
	// Update squares of board to have the pieces described in positions
	for(int i = 0; i < p.getPieces().size(); i++){
		b.update(p.getPieces()[i]);	
	}	

}

PieceSetter::PieceSetter(){
}
