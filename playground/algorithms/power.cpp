// note: exp must be non-negative
// For use with integers as opposed to assuming the base is a floating point
int pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        // Binary number where a 1 exists for both numbers
        if (exp & 1)
            result *= base;
        // Right shift binary by 1 so 101 becomes 010
        exp >>= 1;
        base *= base;
    }
 
    return result;
}