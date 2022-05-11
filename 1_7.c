/*
    Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
    bytes, write a method to rotate the image by 90 degrees. Can you do this in place?
*/

#include <stdio.h>
#include <string.h>

const int WIDTH = 3;
const int HEIGHT = 3;

void printMatrix(int matrix[3][3])
{
    for (int line = 0; line < HEIGHT; line++) {
        for (int col = 0; col < WIDTH; col++) {
            printf("%i%s", matrix[line][col], ",");
        }
        printf("%s", "\r\n");
    }
}

int main (void)
{
    
    int input[3][3] = {{1, 3, 0}, {-1, 5, 9}, {10, 2, 8}};

    //printf("%i", input[0][2]);
    
    int output[3][3];

    // Rotate matrix 90 degrees right:

    // Last output col <-- First input line
    // [0, 2] <-- [0, 0]
    // [1, 2] <-- [0, 1]
    // [2, 2] <-- [0, 2]

    // First output line <-- First input col
    // [0, 2] <-- [0, 0]
    // [0, 1] <-- [1, 0]
    // [0, 0] <-- [2, 0]

    for (int line = 0; line < HEIGHT; line++) {
        //int line = 0;
        for (int col = 0; col < WIDTH; col++) {
            //printf("%i%s", input[line][col], ",");
            
            output[line][col] = input[col][HEIGHT - 1 - line]; // 90 degrees left
            //output[col][HEIGHT - 1 - line] = input[line][col]; // 90 degrees right

        }
        //printf("%s", "\r\n");
    }

    printf("%s", "Input:\r\n");
    printMatrix(input);
    
    printf("%s", "Output:\r\n");
    printMatrix(output);

    return 0;
}
