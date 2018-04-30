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
          // Deal with number in a fen string by putting right # of spaces
          int numSpaces = fen[i] - 48;
          for(int j = 0; j< numSpaces; j++){
            this->expandedFen.push_back('_'); // space character
          }
        }
    }
    if(this->expandedFen.length() != 64){
        std::cout << "Error: FEN does not add up to 64 pieces. Current length = " << expandedFen.length() << std::endl;
    }
}

void Board::changeSquare(int src, int dest, std::string& fen){
    fen[dest] = fen[src];
    fen[src] = '_'; // Simulate deleting piece, which leaves blank space
}

void Board::draw(){
    // Draw all 64 squares and do newline for every 8 spaces
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
    // std::cout << "In Board::move" << std::endl;
    changeSquare(pos1, pos2, this->expandedFen);
}
