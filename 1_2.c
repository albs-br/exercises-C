/*
    Check Permutation: Given two strings, write a method to decide if one is a permutation of the
    other.
*/

#include <stdio.h>
#include <string.h>

int isPermutation(char string1[], char string2[])
{
    if(strlen(string1) != strlen(string2)) return 0;

    // loop throu all string 1 and remove corresponding chars on string
    for (int i = 0; i < strlen(string1); i++)
    {
        int boolFound = 0;
        for (int j = 0; j < strlen(string2); j++)
        {
            if(boolFound == 0)
            {
                if(string1[i] == string2[j])
                {
                    string2[j] = ' ';
                    boolFound = 1;
                }
            }
        }
    }
    
    // if string 2 is all empty spaces then isPermutation = true
    for (int j = 0; j < strlen(string2); j++)
    {
        if(string2[j] != ' ')
        {
            return 0;
        }
    }
    return 1;
}

int main (void)
{
    char string1[] = "para";
    char string2[] = "arpa";
    printf("%i\r\n", isPermutation(string1, string2));

    char string3[] = "para";
    char string4[] = "arha";
    printf("%i\r\n", isPermutation(string3, string4));

    return 0;
}