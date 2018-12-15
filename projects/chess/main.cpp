#include "shared.h"
#include "chess.cpp"

int main()  
{
    Piece p1{PieceType::KNIGHT, Freedom::HOOK};

    cout << "Distance: " << p1.getDistance() << "\n";
    cout << "TypeName: " << p1.getPieceType() << "\n";
    cout << "FreedomName: " << p1.getFreedom() << "\n";

    return 0;
}