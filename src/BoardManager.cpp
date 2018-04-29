#include "BoardManager.h"

BoardManager::BoardManager(std::string fen){
	// std::cout << "alternate gamestate ctor\n";
	this->board = Board(fen);
}

BoardManager::BoardManager(){
	// std::cout << "default gamestate ctor\n";
	this->board = Board();
}

void BoardManager::move(int pos1, int pos2){
	std::cout << "BoardManager::move" << std::endl;
	this->board.move(pos1, pos2);
}

void BoardManager::update(){
	this->board.update();
}

void BoardManager::draw(){
	this->board.draw();
}