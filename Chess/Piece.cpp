#include "Piece.h"
#include <iostream>
#include <string>
using namespace std;
Piece::Piece(){
    cout << "Piece constructor\n";
}
Piece::Piece (string s){
    cout << "Piece constructor with name";
    name = s;
}