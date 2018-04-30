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
	switch(pieceType){
		case ROOK:
			// Check vertical move
			if((srcPos  - destPos) % 8 == 0){
				return true;
			}
			// Check horizontal move
			else if((srcPos - destPos) <= 7 && (destPos - srcPos) >= -7){
				return true;
			}
			// Failed all conditions
			else{
				return false;
			}
		case PAWN:
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