#include "BoardManager.h"

BoardManager::BoardManager(std::string fen){
	// std::cout << "alternate gamestate ctor\n";
	this->board = Board(fen);
}

BoardManager::BoardManager(){
	// std::cout << "default gamestate ctor\n";
	this->board = Board();
}

bool BoardManager::isLegalMove(std::string expandedFen, int pos1, int pos2){
	if((pos1-pos2) % 8 == 0){
		return true;
	}
	else{
		return false;
	}
}

void BoardManager::move(int pos1, int pos2){
	std::cout << "BoardManager::move" << std::endl;
	std::string expandedFen = this->board.getExpandedFen();
	this->board.move(pos1, pos2);
	// if(isLegalMove(expandedFen, pos1, pos2)){
	// 	this->board.move(pos1, pos2);
	// }
}

void BoardManager::update(){
	this->board.update();
}

void BoardManager::draw(){
	this->board.draw();
}