/**
 * caesar.c
 * 
 * Anthony Prajwal
 * 
 * For encrypting the message using caesar cipher
 * 
 */
 
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{   
    // To check if the argument count in the commmand line is 2
    if (argc != 2)
    {   
        printf("invalid,Try again!");
        return 1;
    }
    int k = atoi(argv[1]);
    string plaintext = GetString();
    int i;
    int n = strlen(plaintext);
    for(i = 0;i < n;i++)
    {
        if (isalpha(plaintext[i]))
        {   
            // For lower case letters
            if (islower(plaintext[i]))
            {   
                int j = plaintext[i] - 97;
                j = ( j + k ) % 26;
                printf("%c",j + 97);
            } 
            // For upper case letters
            if (isupper(plaintext[i]))
            {
                int j = plaintext[i] - 65;
                j = ( j + k ) % 26;
                printf("%c",j + 65);
            }
        }
        else
        {
            // For remaining characters
            printf("%c",plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}