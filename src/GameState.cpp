#include "GameState.h"

GameState::GameState(std::string fen){
	std::cout << "alternate gamestate ctor\n";
	this->board = Board("custom");
	// Board x = Board("huh");
}

GameState::GameState(){
	std::cout << "default gamestate ctor\n";
	this->board = Board();
}

void GameState::update(){
	this->board.update();
}

void GameState::draw(){
	this->board.draw();
	
}