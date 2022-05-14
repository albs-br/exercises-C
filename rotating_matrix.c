/*
    Rotating matrixes test
*/

#include <stdio.h>

//void printMatrixLayerClockwise(char matrix[size][size], int min, int max, int size)
//{
//}

int main()
{
    /*
    char matrix[3][3] = {
        {1, 2, 3},
        {8, 9, 4},
        {7, 6, 5}
    };
    */
    char matrix[4][4] = {
        {1,  2,  3,  4},
        {12, 13, 14,  5},
        {11, 16, 15,  6},
        {10,  9,  8,  7}
    };
    /*
    char matrix[5][5] = {
        {1,  2,  3,  4,  5},
        {16, 17, 18, 19,  6},
        {15, 24, 25, 20,  7},
        {14, 23, 22, 21,  8},
        {13, 12, 11, 10,  9}
    };
    */

    //printf("%lu", sizeof(matrix[0]));

    int size = sizeof(matrix[0]);

    int min = 0;            // top/left of layer
    int max = size - 1;    // bottom/right of layer
   
    min++;
    max--;
   
    // Rotate layer counter clockwise
    int first = matrix[min][min];
    for(int i=min; i<=max-1; i++) // first line
    {
        matrix[min][i] = matrix[min][i+1];
    }
    for(int i=min; i<=max-1; i++) // last column
    {
        matrix[i][max] = matrix[i+1][max];
    }
    for(int i=max; i>=min+1; i--) // last line
    {
        matrix[max][i] = matrix[max][i-1];
    }
    for(int i=max; i>min+1; i--) // first column
    {
        matrix[i][min] = matrix[i-1][min];
    }
    matrix[min+1][min] = first;
   
    // print layer clockwise, starting by (min, min)
    for(int i=min; i<=max; i++) // first line
    {
        printf("%i, ", matrix[min][i]);
    }
    for(int i=min+1; i<=max; i++) // last column
    {
        printf("%i, ", matrix[i][max]);
    }
    for(int i=max-1; i>=min; i--) // last line
    {
        printf("%i, ", matrix[max][i]);
    }
    for(int i=max-1; i>min; i--) // first column
    {
        printf("%i, ", matrix[i][min]);
    }
   
    //printMatrixLayerClockwise(matrix, min, max, size);

    //printf("%i", matrix[1][0]);

    return 0;
}