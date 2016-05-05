/**
 * caesar.c
 * Michael Mitrakos
 * Takes in a dollar amount and outputs the optimal change
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;

int main(void)

{
    
    float change = 0;
    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int leftover = 0;
    int coins = 0;
    
    do {
        printf("How much change is owed? ");
        change = GetFloat();
    } while (change <= 0);
    
    
    cents = (int)round(change*100);
    
    quarters = cents / QUARTER;
    leftover = cents % QUARTER;
    
    dimes = leftover / DIME;
    leftover = leftover % DIME;
    
    nickels = leftover / NICKEL;
    leftover = leftover % NICKEL;
    
    coins = quarters + dimes + nickels + leftover;
    
    printf("%d\n", coins);
    
    return 0;
    
}
