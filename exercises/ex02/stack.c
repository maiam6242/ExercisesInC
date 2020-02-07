/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    // printf("foo \n");
    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    // bar();

    for (i=0; i<SIZE; i++) {
        // printf("main \n");
        // printf("%ls\n", array);
        printf("%d\n", array[i]);
    }

    return 0;
}

// The program will print an array that is SIZE elements long that are all 42. I guess if the program was working as expected, all of those would print without a segmentation fault. 

// I get a warning that the return in foo returns the address of a local variable. This is because the stack frame which relates to foo is erased after the function is executed, and the local variable locations aren't actually there or accessible

// Without the print statements, the only ourput is a segmentation fault.

