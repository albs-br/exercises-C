/*
    Insertion: You are given two 32-bit numbers, N and M, and two bit positions, i and
    j. Write a method to insert M into N such that M starts at bit j and ends at bit i. You
    can assume that the bits j through i have enough space to fit all of M. That is, if
    M = 10011, you can assume that there are at least 5 bits between j and i. You would not, for
    example, have j = 3 and i = 2, because M could not fully fit between bit 3 and bit 2.

    EXAMPLE
    Input: N = 10000000000, M = 10011, i = 2, j = 6
    Output: N = 10001001100
*/

#include <stdio.h>
#include <limits.h>

void print_bin(unsigned int integer)
{
    int i = CHAR_BIT * sizeof integer; /* however many bits are in an integer */
    while(i--) {
        putchar('0' + ((integer >> i) & 1)); 
    }
}

int main(void)
{
    int m = 0b10000000000;
    int n = 0b10011;
    int i = 2;
    int j = 6;

    // shift left N by I positions
    int temp = (n << i);

    // OR the result with M
    print_bin(m | temp);

    return 0;
}