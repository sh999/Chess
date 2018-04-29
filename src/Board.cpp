#include "Board.h"
#include <iostream>

Board::Board(){
	std::cout << "Board default ctor\n";
}

Board::Board(std::string fen){
	std::cout << "Board alternative ctor\n";
    this->NUMSQUARES = 64;
    for(int i = 0; i < this->NUMSQUARES; i++){
    	this->pieceChars[3] = 'X';
    }
}

void Board::draw(){
	for(int i = 0; i < this->NUMSQUARES; i++){
    	if(i % 8 == 0){
    		std::cout << "\n";
    	}
    	else{
    		std::cout << this->pieceChars[i] << " ";
    	}
    }
}

void Board::update(){

}

void Board::move(){
    
}
