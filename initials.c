/**
 * intials.c
 * 
 * Anthony Prajwal
 * 
 * Prints the intials of the string in uppercase letters
 * 
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{   
    int i;
    string name = GetString(); 
    int n = strlen(name);      
    for(i = 0; i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32; 
        }    
    }
    printf("%c",name[0]);
    for(i = 1; i < n; i++)
    {
        // searchs for the space bar
        if ((int) name[i] == 32) 
        {
            // prints the next letter
            printf("%c", name[i + 1]);   
        }
        
    }
    printf("\n");   
}