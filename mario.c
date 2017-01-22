#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;

    //
    // Don't accept a negative height or height > 23
    //
    do
    {
         printf("Height: ");
         height = GetInt();
    }
    while (height < 0 || height > 23);
     
    int row = 0;  
     
    for (int i = 0; i < height; i++)
    {
         
        // Print out (height - row) spaces
        for (int j = row; j < (height - 1); j++ )
        {
            printf (" ");
        }
         
        // Print out (row + 1) #'s
        for (int k = 0; k <= (row + 1); k++)
        {
            printf("#");
        }
          
        printf ("\n");
        row++;
     }
    return 0;
}