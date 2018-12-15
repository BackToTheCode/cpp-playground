#include "shared.h"
#include "piece.cpp"
#include "board.cpp"

int main()  
{
    Piece knight_w_l {PieceType::KNIGHT, Freedom::HOOK};
    Board board {};

    cout << "Distance: " << knight_w_l.getDistance() << "\n";
    cout << "TypeName: " << knight_w_l.getPieceType() << "\n";
    cout << "FreedomName: " << knight_w_l.getFreedom() << "\n";

    board.printBoard();

    return 0;
}