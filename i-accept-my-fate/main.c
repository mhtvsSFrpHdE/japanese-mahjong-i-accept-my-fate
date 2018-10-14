#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Update random seed
    srand(time(NULL));

    // Get random number from range
    // We got 13+1 and the range will be from 1 to 14
    // C random will get a number start from zero
    int r = rand() % 14;
    // Add 1 to make zero become one, and thirteen become fourteen
    r += 1;

    // Print result to console then exit the program
    printf("%d", r);
    return 0;
}
