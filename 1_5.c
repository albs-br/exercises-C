/*
    One Away: There are three types of edits that can be performed on strings: insert a character,
    remove a character, or replace a character. Given two strings, write a function to check if they are
    one edit (or zero edits) away. 
*/

#include <stdio.h>
#include <string.h>

int distance(char string1[], char string2[])
{
    //if(strlen(string1) == strlen(string2)) return 0;
    
    //printf("%s", string1);
    
    // check for deleting one char
    for(int i=0; i<strlen(string1); i++)
    {
        char newString[strlen(string1) - 1];
        // initilize empty string (otherwise there would be trash from previous iteration)
        //memset(newString, '\0', sizeof(newString));
        strncpy(newString, "", sizeof(newString));

        printf("%s\r\n", newString);

        int counter = 0;
        for(int j=0; j<strlen(string1); j++)
        {
            if(i != j)
            {
                newString[counter++] = string1[j];
            }
        }
        
        printf("%s\r\n", newString);
    }
}

int main (void)
{
    char string1[] = "pale";
    char string2[] = "pae";

    distance(string1, string2);

    return 0;
}
