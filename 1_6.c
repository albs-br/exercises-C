/*
    String Compression: Implement a method to perform basic string compression using the counts
    of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the
    "compressed" string would not become smaller than the original string, your method should return
    the original string. You can assume the string has only uppercase and lowercase letters (a - z).
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
    char input[] = "aabcccccaaa";
    // printf("%i", sizeof(input)); // returns 12
    // printf("\n\r");
    // printf("%i", strlen(input)); // returns 11

    int counter = 1;
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        //printf("%i", i);          // print int
        //printf("%c", input[i]);   // print char

        if((input[i] != input[i+1]) || (i == strlen(input) - 2))
        {
            printf("%c", input[i]);
            printf("%i", counter);
            counter = 1;
        }
        else
        {
            counter++;
        }
    }
  

    //printf ("Hello world from C\n");

    return 0;
}
