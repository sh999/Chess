#include "Board.h"
#include <iostream>
using namespace std;
Board::Board(){
    cout << "Base Board constructor\n";
    for(int i = 0; i < 64; i++){
    	squares[i] = '.';
    }
}

void Board::draw(){
    cout << "Drawing board\n";
    cout <<  " _ _ _ _ _ _ _ _\n";
    for(int i = 0; i < 64; i++){
    	cout << "|" << squares[i];
        if ((i + 1) % 8 == 0){
            cout << "|" << endl;
        }
    }
    cout <<  " _ _ _ _ _ _ _ _\n";
}

/*

 _ _ _ _ _ _ _ _
|_|_|_|_|_|_|_|_|
|_|_|_|_|_|_|_|_|
*/