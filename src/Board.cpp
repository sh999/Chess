#include "Board.h"
#include <iostream>
#include <vector>
Board::Board(){
	std::cout << "Board default ctor\n";
}

Board::Board(std::string fen){
	std::cout << "Board alternative ctor\n";
    this->NUMSQUARES = 64;
    // Example of expanding fen:
    // rr3r2 -> rrxxxrxx (x is a space)
    std::string expandedFen;    // numbers in fen will be expanded as space character, here as 'x'
    for(int i = 0; i < fen.length(); i++){
        if(fen[i] - 48 > 8){
          expandedFen.push_back(fen[i]);
        }
        else{
          int numSpaces = fen[i] - 48;
          for(int j = 0; j< numSpaces; j++){
            expandedFen.push_back('x'); // space character
          }
        }
    }
    for(int i = 0; i < this->NUMSQUARES; i++){
        // Empty spots
        this->pieceChars[i] = expandedFen[i];
    }
    if(expandedFen.length() != 64){
        std::cout << "Error: FEN does not add up to 64 pieces" << std::endl;
    }
}

void Board::draw(){
	for(int i = 0; i < this->NUMSQUARES; i++){
    	if(i % 8 == 0){
            std::cout << "\n" << this->pieceChars[i] << " ";
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
