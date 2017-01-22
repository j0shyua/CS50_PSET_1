#include <stdio.h>
#include <cs50.h>

int main (void)
{
     printf ("minutes: ");
     int time = GetInt();
    
    //
    // A 1-minute shower is equal to 12 bottles
    //
     printf ("bottles: %d\n", time*12);
}