/* Program to read a file */
#include<stdio.h>
#include<stdlib.h>

/* Global variables */
int buffer_size = 64;

/* The main function */
int main(int argc, char  **argv) {
    /* We only accept a single filename/path as the argument */
    if(argc != 2) {
        printf("error: Please specify a single file as input\n");
        return 1;
    }

    /* Exit if the file cannot be found */
    FILE *input_file;
    if(!(input_file = fopen(*(argv+1), "r"))) {
        printf("error: The file cannot be found\n");
        return 1;
    }

    /* Read the file */
    char *buffer = (char *) calloc(buffer_size, sizeof(char));
    printf("%s\n", *(argv+1));
    while(fgets(buffer, buffer_size, input_file)) {
        printf("%s", buffer);
    }
    
    return 0;
}
