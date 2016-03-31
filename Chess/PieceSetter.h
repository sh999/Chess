#ifndef piecesetter_h
#define piecesetter_h
#include "Piece.h"
#include "Board.h"
#include "PiecePositions.h"

class PieceSetter{
	/* 
		Facilitates communication between PiecePositions and Board
	*/
	public:
		PieceSetter();
		void sendPiecesToBoard(PiecePositions p, Board &b);
	private:
};

#endif
