#include <stdio.h>

int main() {

    int x = 5;
    printf("Hello World!\n");

    // printf("%i\n", x);

    // int y = x + 1;
    // printf("%i", y);
    return 0;
}

/*
The optimized code is shorter, and aligns memory at the top of the program. 
It also has steps that are less and are different in the .LFB0 section. The
optimized code from both questions 3 and 4 is identical since it is functionally
very similar (aside from the variable values). My biggest errors (or discoveries) from these experiments 
were using the -O2 and -S tags. I didn't know that they were case sensitive. 
*/