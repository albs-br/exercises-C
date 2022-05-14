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
    a[4] = "mor123";
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


    for(int i=0; i<7; i++)
    {
        //printf("%s ", a[i]);
        //printf("%i\r\n", strlen(output));

        //strcat(output, a[i]);


        if((strlen(output) + strlen(a[i])) >= maxLineLength)
        {
            printf("%s\r\n", output);

            int spacesLeft = maxLineLength - strlen(output);

            printf("spaces left to fill line: %i\r\n", spacesLeft);

            // loop through current line filling the missing spaces on current spaces, left to right
            // while (spacesLeft > 0)
            // {
            //     for (int j = 0; j < strlen(output); j++)
            //     {
            //         if(spacesLeft > 0)
            //         {
            //             if(output[j] == ' ')
            //             {
            //                 spacesLeft--;
            //                 printf("%s", "  "); // two spaces
            //             }
            //             else
            //             {
            //                 printf("%c", output[j]);
            //             }
            //         }
            //     }
            // }
            // printf("\r\n");
            
            output[0] = '\0'; // empty string
        }
        else if (strlen(output) > 0)
        {
            strcat(output, " ");
        }

        strcat(output, a[i]);

        if(i == (7 - 1)) // is last word
        {
            printf("%s\r\n", output);
        }

        //int spaceBefore = (strlen(output) > 0) ? 1 : 0;
        //lineLength += strlen(a[i]) + spaceBefore;
    }

    return 0;
}

