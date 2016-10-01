#include "Positions.h"

using namespace std;
Positions::Positions(){
    // Undefined for now; is it necessary to define?
}

Positions::Positions(string inputPositions){
    /*
     Based on string that describes pieces with Fen-like notation, will create
     Piece objects with correct position
     */
     allPieces = parsePositions(inputPositions);
    for (int i = 0; i < inputPositions.length(); i++) {
//        allPieces[i]->disp();
    }
}

void Positions::sendPiecesToBoard(Board &b){
    /*
     Send whatever piece has been created to the board
     */
    for(int i = 0; i < allPieces.size(); i++){
        b.update(allPieces[i]);
    }
}

vector<Piece *> Positions::getPieces(){
    return allPieces;
}

string Positions::squareToPos(int i){
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

vector<Piece*> Positions::parsePositions(string fenInput){
    string tempPosition;
    int i = 0;     // Counter
    int squareNumber = i; // Square coordinate (0-63) to place the piece in
    vector <Piece *> _allPieces;
    while (i < fenInput.length()){
        // Loop through entire string of FEN positions (thus .length())
        // Properly converts a char to int for numbers; e.g. '8'(char) -> 8 (int)
        int intValueFromString = fenInput[i] - 48;
        if(fenInput[i] == 'p'){
            // 
            //  Create pawn
            //  Calculate chess position given by the square ID (necessary for Piece creation)
            //  Store pieces in allPieces vector
            
            tempPosition = squareToPos(squareNumber);
            Piece *tempPiece = new Pawn(tempPosition, BLACK);
            _allPieces.push_back(tempPiece);
            squareNumber = squareNumber + 1;
        }
        else if(fenInput[i] == 'r'){
            tempPosition = squareToPos(squareNumber);
            Piece *tempPiece = new Rook(tempPosition, BLACK);
            _allPieces.push_back(tempPiece);
            squareNumber = squareNumber + 1;
        }
        else if(intValueFromString <= 8){ // Conditional simulates what if char = [0-8]
            // 
            //   If a number 0-8 is found instead of a char
            //   Don't create a piece, increment square number to
            //   simulate creating "blank" spaces 
        
            squareNumber = squareNumber + (intValueFromString);
        }
        i++;
    }
    return _allPieces;
} // end parsePositions