/**
 * caesar.c
 * Michael Mitrakos
 * Encrypts text using caesar cipher
 */

#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])

{
    
    int Key = 0;

    string line; 
    
    if (argc < 2 || atoi(argv[0]) < 0 || atoi(argv[1]) < 0)
    {   
        printf("Enter a command argument: \n"); 
        return 1; 
    } 
    else
    {   
        Key = atoi(argv[1]);
    }
    
    line = GetString();
    
        for (int i = 0, j = strlen(line); i < j; i++)
    {
        // for lowercase
        if (islower(line[i]) && isalpha(line[i]))
        {
            line[i] = (line[i] - 'a' + Key) % 26 + 97;
        }
        
        // for uppercase
        else if(isupper(line[i]) && isalpha(line[i]))
        {
            line[i] = (line[i] - 'A' + Key) % 26 + 65;
        }
        
        // print encrypted characters
        printf("%c", line[i]); 
        
    }

    printf("\n"); 
    
    return 0; 
}
    
