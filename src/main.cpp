#include <iostream>
#include "BoardManager.h"
#include <string>
#include <tuple>
void playGame();
void runTests();
void playerVsComp();


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
	BoardManager boardManager = BoardManager("rrrrrrrr888888RRRRRRRR");
	// BoardManager boardManager = BoardManager();
	std::tuple<int,int> move = std::make_tuple(63,47);
	// boardManager.update();
	boardManager.draw();
	boardManager.move(std::get<0>(move), std::get<1>(move));	
	boardManager.draw();
}
