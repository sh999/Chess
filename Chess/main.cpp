#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Board.h"

using namespace std;

int main()
{
    Board board;
    Pawn p1("c7",BLACK);
    p1.disp();
    p1.posToSquare();
    board.draw();
    board.update(p1);
    board.draw();
}

