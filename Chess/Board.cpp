#include "Board.h"

using namespace std;

Board::Board(){
    cout << "Base Board constructor\n";
    for(int i = 0; i < 64; i++){
        // Empty square represented as ' '
        // cout << "Drawing empty space..\n";
    	squares[i] = ' ';
    }
}

Board::Board(Positions pos){
    /*
        Board constructor with positions
    */
    cout << "Alternate Board constructor\n";
    for(int i = 0; i < 64; i++){
        // Empty square represented as ' '
        // cout << "Drawing empty space..\n";
        squares[i] = ' ';
    }
    vector <Piece *> allPieces = pos.getPieces();
    for(size_t i = 0; i < allPieces.size(); i++){
        update(allPieces[i]);
    }
    // cout << "POSITIONS SIZE = " << allPieces.size() << endl;

}

void Board::draw(){
    /*
    	Draws board
     	Each square is filled with a character depending on piece identity
     	Each square's char data stored in squares[]
     	Values are modified by Board::update()
    */
    // cout << "Drawing board\n";
    cout <<  " _ _ _ _ _ _ _ _\n";
    for(int i = 0; i < 64; i++){
        // Draw board and create new line after 8 squares
        // Display appropriate piece based on squares array
        cout << "|";
        if (squares[i] == ' '){
            cout << "_";
        }
    	else cout << squares[i];
        if ((i + 1) % 8 == 0){
            cout << "|" << endl;
        }
    }
}

void Board::update(Piece *p){
    /*
    	Update doesn't draw, but changes the underlying storage of what piece
         is held by what square
        Input: Piece that has already been made by the constructor; the piece knows its own position; board doesn't yet
        Then, the piece gives its character representation, which is stored in board's squares[].
        Modifies squares[], which holds identity of what piece is on each square 
    */
    // cout << "Calling board update\n";
    sqToModify = p->posToSquare();   // Get which board square which to modify
    squares[sqToModify] = p->getGraphic();      // Currently can only draw Pawns
    //        squares[sqToModify] = 'o';      // Currently can only draw Pawns
}

void Board::move(string move_string){
    /*
        Play the move as specified by move_string
    */
    // cout << "Doing move " << move_string << endl;
}
void Board::select_by_int(int num_pos){
    /*
        Input: numeric square position of board
        Output: Give info on what is on that square
    */
    // cout << "Selecting square " << num_pos << endl;
    // cout << "Info on square:\n";
    // cout << squares[num_pos] << endl;
}
void Board::move_by_ints(int from, int to){
    /*
        Input: Numeric positions
        Task: Move piece on position "from" to position "to"
    */
    // cout << "Moving from " << from << " to " << to << endl;
    if(squares[from] != ' '){  // Perform move if there is piece on square
        squares[to] = squares[from];
        squares[from] = ' ';
    }

}
int Board::movestringToNum(string pos_string){
    /*
        Input: move_string (e.g. 'd2')
        Task: Convert to numerical board position;
            opposite of squareToPos()
    */
    // cout << "Doing move " << pos_string << endl;
    char file = pos_string[0];
    int rank = int(pos_string[1])-48;
    // cout << "file = " << file << endl;
    // cout << "rank = " << rank << endl;
    int file2 = int(file)-97;
    int rank2 = 8-rank;
    int numpos = rank2*8+file2;
    // cout << "file2 = " << file2 << endl;
    // cout << "rank2 = " << rank2 << endl;
    // cout << "numpos = " << numpos << endl;
    
    // int pos = file2

    return numpos;

/*
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
    return pos;*/
}