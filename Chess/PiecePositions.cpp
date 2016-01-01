
#include "PiecePositions.h"
#include "Piece.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
PiecePositions::PiecePositions(){
    
}

PiecePositions::PiecePositions(string positionsData){
    string tempPosition;
    for(int i = 0; i < positionsData.length(); i++){
        // Creates piece objects depending on presence of character in input position
        if(positionsData[i] == 'p'){
            tempPosition = squareToPos(i);
            allPieces.push_back(Piece(tempPosition,BLACK,i));
        }
    }
    
    for (int i = 0; i < positionsData.length(); i++) {
        allPieces[i].disp();
    }

}

void PiecePositions::sendPiecesToBoard(Board &b){
    /*
     Send whatever piece has been created to the board
     */
    for(int i = 0; i < allPieces.size(); i++){
        b.update(allPieces[i]);
    }
    
}

vector<Piece> PiecePositions::getPieces(){
    return allPieces;
}

string PiecePositions::squareToPos(int i){
    int rank = 8 - int(i / 8);
    int fileInt = i % 8;
    string file;
    if(fileInt == 0){
        file = 'a';
    }
    else if(fileInt == 1){
        file = 'b';
    }
    else if(fileInt == 2){
        file = 'c';
    }
    else if(fileInt == 3){
        file = 'd';
    }
    else if(fileInt == 4){
        file = 'e';
    }
    else if(fileInt == 5){
        file = 'f';
    }
    else if(fileInt == 6){
        file = 'g';
    }
    else if(fileInt == 7){
        file = 'h';
    }
//    cout << rank;
//    cout << endl << file;
    string pos = file + to_string(rank);
//    cout << pos;
    return pos;
}