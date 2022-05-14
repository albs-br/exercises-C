/*
    C pointers test
*/

#include <stdio.h>

int main()
{
    int x = 10000;  // 4 bytes integer
    char y = 25;    // 1 byte integer
   
    int *ptr_x = &x;
    char *ptr_y = &y;
   
    printf("x: %i\r\n", x);
    printf("&x: 0x%x\r\n", &x);
    printf("sizeof(x): %i\r\n", sizeof(x));
    printf("ptr_x: 0x%x\r\n", ptr_x);
    printf("*ptr_x: %i\r\n", *ptr_x);

    printf("\r\n");

    printf("y: %i\r\n", y);
    printf("&y: 0x%x\r\n", &y);
    printf("sizeof(y): %i\r\n", sizeof(y));
    printf("ptr_y: 0x%x\r\n", ptr_y);
    printf("*ptr_y: %i\r\n", *ptr_y);

    return 0;
}