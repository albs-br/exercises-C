/*
    Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
    cannot use additional data structures? 
*/

#include <stdio.h>
#include <string.h>

int IsUnique(char input[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        for (int j = 0; j < strlen(input); j++)
        {
            if((j != i) && (input[i] != ' ') && (input[i] == input[j])) return 0;
        }
    }
    
    return 1;
}

int main(void)
{
    char input_1[] = "my string test";
    char input_2[] = "the quick brown fox";
    char input_3[] = "the quick brown";

    printf("%i\r\n", IsUnique(input_1));
    printf("%i\r\n", IsUnique(input_2));
    printf("%i\r\n", IsUnique(input_3));

    return 0;
}