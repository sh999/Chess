#include <iostream>
#include "BoardManager.h"
#include "PgnParser.h"
#include <string>
#include <tuple>
void playGame();
void runTests();
void playerVsComp();
void testSingleMoves();
void testLoadPgn();

int main(){
	int status = 0;
	if(status == 0){
		playGame();
	}
	else if(status == 1){
		runTests();
	}
}

void playGame(){
	// Play regular game; can have many modes later
	int mode = 0;
	if(mode == 0){
		playerVsComp();
	}
	else{
		// Other game modes can be put here, such as p vs p
	}
}

void runTests(){
	// Run unit test
}

void playerVsComp(){
	// testSingleMoves();
	testLoadPgn();
	
}


void testLoadPgn(){
	std::cout << "Testing loading pgn and running moves\n";
	std::string input = "../pgn/game1.pgn";
	PgnParser pgnParser = PgnParser(input);
	std::cout << "Moves = " << pgnParser.getMoves() << "\n";
	pgnParser.printMoves();
}

void testSingleMoves(){
	// Test moving by calling move step by step
	std::cout << "Testing single moves\n";

	BoardManager boardManager = BoardManager("rrrrrrrr888888RRRRRRRR");
	// BoardManager boardManager = BoardManager();
	// boardManager.update();
	std::cout << "\nBegin new game" << std::endl;
	boardManager.draw();
	
	std::tuple<int,int> move = std::make_tuple(63,47);
	boardManager.move(std::get<0>(move), std::get<1>(move));	
	boardManager.draw();

	move = std::make_tuple(7,39);
	boardManager.move(std::get<0>(move), std::get<1>(move));	
	boardManager.draw();

	move = std::make_tuple(47,49);
	boardManager.move(std::get<0>(move), std::get<1>(move));	
	boardManager.draw();
}