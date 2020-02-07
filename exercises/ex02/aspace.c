/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1; // globals

int main ()
{
    int var2 = 5; // stack
    void *p = malloc(128); // stack
    void *q = malloc(64);
    void *x = malloc(14);
    void *y = malloc(14);
    // q > p, so the heap grows toward larger numbers (up)
    char *s = "Hello, World"; // stack
    int var3 = 9;

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    printf ("Address of var3 is %p\n", &var3);
    // var3 > var2, so the stack grows up as well
    
    printf ("p points to %p\n", p);
    printf ("q points to %p\n", q);
    printf ("x points to %p\n", x);
    printf ("y points to %p\n", y);
    //  There are 20 bits of between the two numbers
    
    printf ("s points to %p\n", s);

    return 0;
}
