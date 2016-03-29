#ifndef piecesetter_h
#define piecesetter_h
#include "Piece.h"
#include "Board.h"

class PieceSetter{
	/* 
		Facilitates communication between PiecePositions and Board
	*/
	public:
		void sendPiecesToBoard(PiecePositions p, Board &b);
	private:
};
