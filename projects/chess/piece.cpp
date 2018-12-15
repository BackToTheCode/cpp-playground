enum class PieceType
{
    PAWN = 1,   
    KNIGHT = 3, 
    BISHOP = 7, 
    ROOK = 7,  
    QUEEN = 7,  
    KING = 1,   
};

enum class Freedom
{
    FULL,
    DIAGONAL,
    CROSS,
    HOOK
};

class Piece
{
  private:
    PieceType m_pieceType;
    Freedom m_freedom;
    int m_distance;

  public:
    // Default constructor
    Piece(
        PieceType pieceType = PieceType::PAWN,
        Freedom freedom = Freedom::FULL
    )
    {
        m_pieceType = pieceType;
        m_freedom = freedom;
        m_distance = static_cast<int>(pieceType);
    }

    int getDistance() { return m_distance; }

    const char* getFreedom()
    {
        if (m_freedom == Freedom::FULL)
            return "Full";
        else if (m_freedom == Freedom::DIAGONAL)
            return "Diagonal";
        else if (m_freedom == Freedom::CROSS)
            return "Cross";
        else if (m_freedom == Freedom::HOOK)
            return "Hook";
        else
            return "Who knows!";
    }

    const char* getPieceType()
    {
        if (m_pieceType == PieceType::PAWN)
            return "Pawn";
        else if (m_pieceType == PieceType::KNIGHT)
            return "Knight";
        else if (m_pieceType == PieceType::BISHOP)
            return "Bishop";
        else if (m_pieceType == PieceType::ROOK)
            return "Rook";
        else if (m_pieceType == PieceType::QUEEN)
            return "Queen";
        else if (m_pieceType == PieceType::KING)
            return "King";
        else
            return "Who knows!";
    }
};
