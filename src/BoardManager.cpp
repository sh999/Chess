#include "BoardManager.h"

BoardManager::BoardManager(std::string fen){
	// std::cout << "alternate gamestate ctor\n";
	this->board = Board(fen);
}

BoardManager::BoardManager(){
	// std::cout << "default gamestate ctor\n";
	this->board = Board();
}

bool BoardManager::isLegalMove(std::string expandedFen, int srcPos, int destPos){
	char pieceChar = expandedFen[srcPos];
	PieceEnum pieceType;
	if(pieceChar == 'r' || pieceChar == 'R'){
		pieceType = ROOK;
	}
	else if(pieceChar == 'p' || pieceChar == 'P'){
		pieceType = PAWN;
	}
	else if(pieceChar == 'n' || pieceChar == 'N'){
		pieceType = KNIGHT;
	}
	else if(pieceChar == 'b' || pieceChar == 'B'){
		pieceType = BISHOP;
	}
	else if(pieceChar == 'q' || pieceChar == 'Q'){
		pieceType = QUEEN;
	}
	else if(pieceChar == 'k' || pieceChar == 'K'){
		pieceType = KING;
	}

	switch(pieceType){
		case ROOK:
			// Check vertical move
			if((srcPos  - destPos) % 8 == 0){
				// moving vertical will make above condit true
				return true;
			}
			// Check horizontal move
			else if((srcPos - destPos) <= 7 && (destPos - srcPos) >= -7 && (srcPos / 8 ) == (destPos/ 8)){
				// difference betw src and destpos has to be within 7, otherwise you're moving off the edge
				// also / 8 has to be equal b/c dividing by 8 will show which rank it's in; back rank is row 0
				return true;
			}
			// Failed all conditions
			else{
				return false;
			}
		case PAWN:
			// Pawn move restrictions (not considering en passant this time):
			// Can only move one square ahead (depends on player color)
			// Can move diagonal if capturing
			break;
	}


	// if((srcPos-  destPos) % 8 == 0){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
}

void BoardManager::move(int pos1, int pos2){
	// std::cout << "BoardManager::move" << std::endl;
	std::string expandedFen = this->board.getExpandedFen();
	std::cout << "\n\nMoving from square " << pos1 << " to " << pos2 << std::endl; 
	// this->board.move(pos1, pos2);
	if(isLegalMove(expandedFen, pos1, pos2)){
		this->board.move(pos1, pos2);
	}
	else{
		std::cout << "Illegal move!" << std::endl;
	}
}

void BoardManager::update(){
	this->board.update();
}

void BoardManager::draw(){
	this->board.draw();
}