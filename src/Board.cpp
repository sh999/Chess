#include "Board.h"
#include <iostream>
#include <vector>
Board::Board(){
	// std::cout << "Board default ctor\n";
}

Board::Board(std::string fen){
	// std::cout << "Board alternative ctor\n";
    this->NUMSQUARES = 64;
        // Example of expanding fen:
    // rr3r2 -> rrxxxrxx (x is a space)
    for(int i = 0; i < fen.length(); i++){
        if(fen[i] - 48 > 8){
          this->expandedFen.push_back(fen[i]);
        }
        else{
          int numSpaces = fen[i] - 48;
          for(int j = 0; j< numSpaces; j++){
            this->expandedFen.push_back('_'); // space character
          }
        }
    }
    // for(int i = 0; i < this->NUMSQUARES; i++){
    //     // Empty spots
    //     this->pieceChars[i] = this->expandedFen[i];
    // }
    if(this->expandedFen.length() != 64){
        std::cout << "Error: FEN does not add up to 64 pieces. Current length = " << expandedFen.length() << std::endl;
    }
}

void Board::draw(){
	for(int i = 0; i < this->NUMSQUARES; i++){
    	if(i % 8 == 0){
            std::cout << "\n" << this->expandedFen[i] << " ";
    	}
    	else{
    		std::cout << this->expandedFen[i] << " ";
    	}
    }
}

std::string Board::getExpandedFen(){
    return this->expandedFen;
}

void Board::update(){

}

void Board::move(int pos1, int pos2){
    std::cout << "In Board::move" << std::endl;
}
