#include "Board.h"
Board::Board(){
	
}
Board::Board(std::string fen){
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

void Board::move(){
    
}
