enum Color
{
RED,
BLUE, // BLUE is put into the global namespace
GREEN
};

enum Feeling
{
HAPPY,
TIRED,
BLUE // error, BLUE was already used in enum Color in the global namespace
};

enum Color
{
    COLOR_BLACK, // assigned 0
    COLOR_RED, // assigned 1
    COLOR_BLUE, // assigned 2
    COLOR_GREEN, // assigned 3
    COLOR_WHITE, // assigned 4
    COLOR_CYAN, // assigned 5
    COLOR_YELLOW, // assigned 6
    COLOR_MAGENTA // assigned 7
};
 
Color paint(COLOR_WHITE);
std::cout << paint;