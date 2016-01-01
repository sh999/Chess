
#include "PiecePositions.h"
#include "Piece.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
PiecePositions::PiecePositions(){
    
}

PiecePositions::PiecePositions(string positionsData){
    /*
     Based on string that describes pieces with Fen-like notation, will create
     Piece objects with correct position
     */
    string tempPosition;
    int i = 0;  // Counter
    int squareNumber = i; // Square coordinate (0-63) to place the piece in
    while (i < positionsData.length()){
        int intValueFromString = positionsData[i] - 48;
        if(positionsData[i] == 'p'){ // Work with only pawns for now
            tempPosition = squareToPos(squareNumber);
            allPieces.push_back(Piece(tempPosition,BLACK,i));
            squareNumber = squareNumber + 1;
        }
        else if(positionsData[i] == '/'){
            // New rank; unlike fan, it's '/', not '\' for convencience of not doing '\\'
            squareNumber = (int(squareNumber / 8) + 1) * 8;
        }
        else if(intValueFromString <= 8){ // Conditional simulates what if char = [0-8]
            // If a number 0-8 is found instead of a char
            // Don't create a piece, increment square number to
            // simulate creating "blank" spaces
            squareNumber = squareNumber + (intValueFromString);
        }
        i++;
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