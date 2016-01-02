
#include "PiecePositions.h"
#include "Piece.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
PiecePositions::PiecePositions(){
    // Undefined for now; is it necessary to define?
}

PiecePositions::PiecePositions(string positionsData){
    /*
     Based on string that describes pieces with Fen-like notation, will create
     Piece objects with correct position
     */
    string tempPosition;
    // Counter
    int i = 0;
    // Square coordinate (0-63) to place the piece in
    int squareNumber = i;
    while (i < positionsData.length()){
        // Loop through entire string of FEN positions (thus .length())
        // Properly converts a char to int for numbers; e.g. '8'(char) -> 8 (int)
        int intValueFromString = positionsData[i] - 48;
        // If 'p' is seen in input string, create pawn object
        if(positionsData[i] == 'p'){ // Work with only pawns for now
            // Calculate chess position given by the square ID (necessary for Piece creation)
            tempPosition = squareToPos(squareNumber);
            // Store pieces in allPieces vector
            allPieces.push_back(Piece(tempPosition,BLACK,i));
            squareNumber = squareNumber + 1;
        }
        else if(positionsData[i] == '/'){
            // New rank; must "jump" square number
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
    // Getter for allPieces
    return allPieces;
}

string PiecePositions::squareToPos(int i){
    /*
     Convert square ID (0-63) to chess position (e.g. e2)
     */
    // Straightforward conversion to get numeric rank
    int rank = 8 - int(i / 8);
    // Conversion to letter file requires more steps
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
    string pos = file + to_string(rank);
    return pos;
}