/**
 * initials.c
 * Michael Mitrakos
 * Gives the initials for a given name
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    
    // Get name ane check if valid
    string name = GetString();

    printf("%c", toupper(name[0]));
    
    // Iterate through the characters of the name
    for (int i = 0, sl = strlen(name); i <= sl; i++) {
        if(name[i]== ' ')
        printf("%c", toupper(name[i+1]));
    } 
    
    printf("\n");

}
