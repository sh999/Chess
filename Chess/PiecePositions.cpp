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
//        cout << positions[squareCoord];
        if(positions[squareCoord] == 'p'){
            cout << "yes";
//            allPieces.push_back(Piece p(squareCoord, black));
        }
        
    }

}

vector<Piece> PiecePositions::getPieces(){
    return allPieces;
}