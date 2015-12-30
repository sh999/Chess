#include "PiecePositions.h"
#include "Piece.h"
#include <iostream>
#include <vector>
using namespace std;
PiecePositions::PiecePositions(){
    
}

PiecePositions::PiecePositions(string positions){
    int squareCoord;

    for(int i = 1; i <= positions.length(); i++){
        squareCoord = i - 1;
        if(positions[squareCoord] == 'p'){
            cout << "yes";
            allPieces.push_back(Piece("e2",BLACK,i));
        }
    }
    
    for (int i = 0; i < positions.length(); i++) {
        allPieces[i].disp();
    }
    /*
     Converting position to square ID
     */

}

vector<Piece> PiecePositions::getPieces(){
    return allPieces;
}