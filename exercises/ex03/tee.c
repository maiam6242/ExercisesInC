
#include <stdio.h>

int main(int argc, char *argv[] )  {

    char *line = NULL;
    size_t size;
    // get input from stdin
    while (getline(&line, &size, stdin) != -1) {
        if (*argv[1] == 'a'){
            // append to the file provided
            FILE *file = fopen(argv[argc-1], "a");
            fprintf(file,line);
            fprintf(stdout,line);
            fclose(file);
        }
        if(argv[2]){
            // write to the file provided
            FILE *file1 = fopen(argv[argc-1], "w");
            fprintf(file1,line);
            fprintf(stdout,line);
            fclose(file1);
        }
    }
}

// 3) In general, this worked fairly well for me once I understood what was actually going on. I guess one thing I want to do in the future is not be so intimidated by the language and the man pages. I also kind of assume that hardcoding for the argument placement would not actually work in a function that would be used "in real life". I was shocked in that my code worked the first time I tested it, but I had a bit of trouble figuring out how to read the input buffer, and had to consult a few stack overflow pages. 

// 4) I was shocked by how long the professional code was. Essentially, I noticed a lot of extra checks and accounting for all sorts of edge cases which I didn't think about or take into account. They also included all sorts of fancy warnings and pointer things which I don't know how to use or work with yet.