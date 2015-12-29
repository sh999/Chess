#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Board.h"

using namespace std;

int main()
{
    Board board;
    Pawn p1("e2",BLACK);
    p1.disp();

    board.draw();
    board.update(p1);
    board.draw();
}

