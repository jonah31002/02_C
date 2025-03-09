// Fig. 3.13: fig03_13.c
// Preincrementing and posincrementing

#include<stdio.h>

// function main begins program execution
int main(void)
{
    int c; // define variable

    // demonstrate postincrement
    c = 5; // assign 5 to c
    printf("Original c: %d\n", c); // print 5
    printf("Result of c++: %d\n", c++); // print 5 then postincrement
    printf("Result of c: %d\n", c); // printf 6

    // demonstrate preincrement
    c = 5; // assign 5 to c
    printf("Original c: %d\n", c); // print 5
    printf("Result of ++c: %d\n", ++c); // preincrement then print 6
    printf("Result of c: %d\n", c); // print 6
} // end function main
