/* Text justification */

#include <stdio.h>
#include <string.h>

int main()
{
    // inputs (text and maxLineLength)
    //const int NUMBER_OF_WORDS = 7;
    const char *a[7];
    a[0] = "Text";
    a[1] = "justification";
    a[2] = "sample";
    a[3] = "string";
    a[4] = "more";
    a[5] = "words";
    a[6] = "here";
    const int maxLineLength = 20;

    char output[200] = "";

    // draw "ruler"
    for(int i=0; i<maxLineLength; i++)
    {
        printf("%i", (i%10));
    }
    printf("\r\n");


    //int lineLength = 0;
    for(int i=0; i<7; i++)
    {
        //printf("%s ", a[i]);
        //printf("%i\r\n", strlen(output));

        //strcat(output, a[i]);


        if((strlen(output) + strlen(a[i])) > maxLineLength)
        {
            printf("%s\r\n", output);
            printf("spaces left to fill line: %i\r\n", maxLineLength - strlen(output));

            // loop through current line filling the missing spaces on current spaces, left to right

            //lineLength = 0;
            output[0] = '\0'; // empty string
        }
        else //if (i < (7 - 1))
        {
            strcat(output, " ");
        }

        strcat(output, a[i]);

        //int spaceBefore = (strlen(output) > 0) ? 1 : 0;
        //lineLength += strlen(a[i]) + spaceBefore;
    }

    return 0;
}

