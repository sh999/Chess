#include "Piece.h"
#include <iostream>
#include <string>
using namespace std;
Piece::Piece(){
    cout << "Piece constructor\n";
    currentPosition = "00";
}

Piece::Piece(string pos){
    cout << "Piece constructor with position\n";
    currentPosition = pos;
}

void Piece::dispPosition(){
    cout << "Current position = " << currentPosition << endl;
}

/*
Piece::Piece (string s){
    cout << "Piece constructor with name";
    name = s;
}*/