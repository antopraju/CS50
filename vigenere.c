/**
 * vigenere.c
 * 
 * Anthony Prajwal
 * 
 * To encrypt the message using vigenere cipher
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{   
    // To check if the argument count is greater than 2
    if (argc != 2)
    {
        printf("invalid!\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        // key alpha validation
        if (!isalpha(argv[1][i]))
        {   
            printf("invalid!\n");
            return 1;
        }

        // zero key
        argv[1][i] = tolower(argv[1][i]);
    }

    int len = strlen(argv[1]);
    string text = GetString();
    int n = strlen(text);
    int p = 0;
    for(int i = 0; i < n; i++)
    {
        if (isalpha(text[i]))
        {   
            p = p % len;
            // For lower case letters
            if (islower(text[i]))
            {   
                int j = text[i] - 97;
                int k = (int) argv[1][p] - 97;
                p++;
                j = ( j + k ) % 26;
                printf("%c",j + 97);
            } 
            // For upper case letters
            if (isupper(text[i]))
            {
                int j = text[i] - 65;
                int k = (int) argv[1][p] - 97;
                p++;
                j = ( j + k ) % 26;
                printf("%c",j + 65);
            }
        }
        else
        {
            // For remaining characters
            printf("%c",text[i]);
        }
    }
    printf("\n");
    return 0;
}