#include "PgnParser.h"

PgnParser::PgnParser(std::string inputPath){
	std::cout << "In PgnParser constructor\n";
	std::ifstream inputFile(inputPath);
	std::string line;
	if(inputFile.is_open()){
		int lineNumber = 0;
		while(getline(inputFile, line)){
			// std::cout << "line = " << line << "\n";
			if(lineNumber == 11){
				// std::cout << "line = " << line << "\n";
				PgnToString.insert(std::pair<std::string, std::string>("Moves",line));
				setMoves(line);
				setMovesVec(line);
			}
			lineNumber = lineNumber + 1;
		}

	}
	else{
		std::cout << "Error opening file\n";
	}
}

void PgnParser::setMovesVec(std::string allMoves){
	int spaceCount = 0; // A move is like so, enclosed in brackets: [1. e2 e4 ]2.
						// Counting # spaces will allow for separation of moves
	char currentChar; 
	std::string buffer;
	std::string moveNumber;
	int moveNumberInt;
	std::string whiteMove;
	std::string blackMove;
	for(int i = 0; i < allMoves.size(); i++){
		currentChar = allMoves[i];
		buffer = buffer + currentChar;
		if(currentChar == ' '){
			spaceCount = spaceCount + 1;
			if(spaceCount == 1){
				moveNumber = buffer.substr(0,buffer.size()-2);
				moveNumberInt = std::stoi(moveNumber);
			}
			else if(spaceCount == 2){
				whiteMove = buffer;
			}
			else if(spaceCount == 3){
				blackMove = buffer;
			}
			buffer = "";
		}
		std::cout << "Char: " << allMoves[i] << " spaces = " << spaceCount << " buffer = " << buffer << 
					 " move = " << moveNumberInt << " white = " << whiteMove << " black = " << blackMove << "\n";

		if(spaceCount == 3){
			spaceCount = 0;
			movesVec.push_back(std::make_tuple(moveNumberInt, whiteMove, blackMove));
		}
	}

}

void PgnParser::setMoves(std::string s){
	moves = s;
}

std::string PgnParser::getMoves(){
	// std::cout << "Moves = " << moves << "\n";
	return moves;
}

void PgnParser::printMoves(){
	std::cout << "Printing moves:\n";
	for(int i = 0; i < movesVec.size(); i++){
		std::cout << std::get<0>(movesVec[i]) << " " << std::get<1>(movesVec[i]) << " " << std::get<2>(movesVec[i]) << "\n";
	}
}