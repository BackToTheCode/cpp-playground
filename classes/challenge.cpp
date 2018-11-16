#include <cassert>
#include <iostream>
#include <string>

class Ball
{
private:
    std::string m_color;
    double m_radius;
 
public:
    // Default constructor

 
    // Default constructor with no parameters
    Ball()
    {
        m_color = "black";
        m_radius = 10.0;
    }
 
        // Constructor with only color parameter (radius will use default value)
	Ball(const std::string &color)
	{
		m_color = color;
		m_radius = 10.0;
	}
 
        // Constructor with only radius parameter (color will use default value)
	Ball(double radius)
	{
		m_color = "black";
		m_radius = radius;
	}
 
        // Constructor with both color and radius parameters
	Ball(const std::string &color, double radius)
	{
		m_color = color;
		m_radius = radius;
	}


    std::string getColor() { return m_color; }
    int getRadius() { return m_radius; }

    void print()
    {
        std::cout << "color: " << getColor() << ", radius: " << getRadius() << "\n";
    }
};


int main()
{
    Ball def;
    def.print();
 
	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
 
    return 0;
}
