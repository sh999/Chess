#ifndef piecesetter_h
#define piecesetter_h
#include "Piece.h"
#include "Board.h"
#include "Positions.h"

class PieceSetter{
	/* 
		Facilitates communication between Positions and Board
	*/
	public:
		PieceSetter();
		void sendPiecesToBoard(Positions p, Board &b);
	private:
};

#endif
