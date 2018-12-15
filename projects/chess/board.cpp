class Board
{
  private:
    int m_height { 7 };
    int m_width { 7 };

  public:
    // Default constructor
    Board()
    {

    }

    void printWalls() 
    {
        for (int i = 0; i < m_width + 1; i++)
        {
            cout << "|      ";
        }
    }

    void printBoard() 
    { 

        for (int j = 0; j < m_height; j++) 
        {
            for (int i = 0; i < m_width; i++)
            {
                cout << " ------";
            }
            cout << "\n";
            printWalls();
            cout << "\n";
            printWalls();
            cout << "\n";
        }   

        for (int i = 0; i < m_width; i++)
        {
            cout << " ------";
        }  
    }

};
