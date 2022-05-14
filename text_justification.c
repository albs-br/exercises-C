/* Text justification */

#include <stdio.h>
#include <string.h>

int main()
{
    // inputs (text and maxLineLength)
    const char *a[7];
    a[0] = "Text";
    a[1] = "justification";
    a[2] = "sample";
    a[3] = "string";
    a[4] = "more";
    a[5] = "words";
    a[6] = "here";
    const int maxLineLength = 20;
    
    int lineLength = 0;
    int numberOfSpaces = 0;
    for(int i=0; i<7; i++)
    {
        
        //printf("%i\r\n", lineLength);

        if((lineLength + strlen(a[i]) + numberOfSpaces) > maxLineLength)
        {
            printf("lineLength: %i\r\n", lineLength);
            printf("numberOfSpaces: %i\r\n", numberOfSpaces);
            
            int requiredSpaces = maxLineLength - (lineLength + numberOfSpaces);
            
            lineLength = 0;
            numberOfSpaces = 0;
            printf("%i\r\n", requiredSpaces);
        }
        else
        {
            numberOfSpaces++;
            lineLength += strlen(a[i]);
        }
        printf("%s,", a[i]);
    }

    return 0;
}

