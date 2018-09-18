static double g_gravity (9.8); // restrict direct access to this file only
double getGravity() // this function can be exported to other files to access the global outside of this file
{
    // We could add logic here if needed later
    return g_gravity;
} 