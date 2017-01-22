#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float totalAmount;
    
    // 
    // Don't accept a negative number
    //
    do
    {
        printf ("Hi, how much change is owed?\n");
        totalAmount = GetFloat();
    }
    while (totalAmount < 0);
    
    //
    // Change the input into cents and round to the nearest integer
    //
    totalAmount = round(totalAmount * 100);
    int changeOwed = totalAmount;
    
    //
    // Define values of coins and counters for different coins
    //
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int numQuarters = 0;
    int numDimes = 0;
    int numNickels = 0;
    int numPennies = 0;
    
    //
    // Loops for every different coin calculating 
    // if the coin value is less than the input.
    //
    while (quarters <= changeOwed)
    {
        changeOwed = (changeOwed - quarters);
        numQuarters++;
    }

    while (dimes <= changeOwed)
    {
        changeOwed = (changeOwed - dimes);
        numDimes++;
    }

    while (nickels <= changeOwed)
    {
        changeOwed = (changeOwed - nickels);
        numNickels++;
    }

    while (pennies <= changeOwed)
    {
        changeOwed = (changeOwed - pennies);
        numPennies++;
    }
    
    //
    // Print out the amount of coins needed to return change
    //
    printf ("%d\n", (numQuarters + numDimes + numNickels + numPennies));
    
}