#include <iostream>
#include "GameState.h"
#include <string>
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
	GameState gameState = GameState("rrrrrrrR888888pppppppp");
	// GameState gameState = GameState();
	gameState.update();
	gameState.draw();
}
