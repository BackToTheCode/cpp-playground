#include <tuple>
#include <iostream>
 
std::tuple<int, double> returnTuple() // return a tuple that contains an int and a double
{
	return std::make_tuple(5, 6.7); // use std::make_tuple() as shortcut to make a tuple to return
}
 
int main()
{
	int a;
	double b;
	std::tie(a, b) = returnTuple(); // put elements of tuple in variables a and b
	std::cout << a << ' ' << b << '\n'; 
 
	return 0;
}