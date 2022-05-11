/*
    URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
    has sufficient space at the end to hold the additional characters, and that you are given the "true"
    length of the string. (Note: If implementing in Java, please use a character array so that you can
    perform this operation in place.) 
*/

#include <stdio.h>
#include <string.h>

const char * URLify(char input[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        if(input[i] == ' ')
        {
            for (int j = strlen(input)-1; j >= i+3; j--) // iterating backwards
            {
                input[j] = input[j-2];
            }

            input[i] = '%';
            input[i+1] = '2';
            input[i+2] = '0';
        }
    }
  
    //printf("%s\r\n", input);

    return input;
}

int main (void)
{
    char input1[] =  "Andre Baptista        ";
    //char input[] = "André%20Baptista%20%20";
    char input2[] =  " Andre Baptista       ";
    //char input[] = "%20André%20Baptista%20";

    printf("%s\r\n", URLify(input1));
    printf("%s\r\n", URLify(input2));

    return 0;
}
