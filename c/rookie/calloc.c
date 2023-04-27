/* Let us compare malloc and calloc */
#include <stdio.h>
#include <stdlib.h>

/* The C Compiler does not allow memory allocations outside a function
 * If the calloc() function is called here, it results in the following
 * error: initializer element is not a compile-time constant */

/* The main function */
int main() {
    /* Create a string of length 10 with calloc */
    char *calloc_str = (char *)calloc(10, sizeof(char));

    /* Create a string of length 10 with malloc */
    char *malloc_str = (char *)malloc(10*sizeof(char));

    /* Change the size of malloc_str to 15 characters */
    malloc_str = realloc(malloc_str, 15*sizeof(char));

    /* Let us try printing the value of each of these strings */
    printf("calloc_str -> %s\n", calloc_str);
    printf("malloc_str -> %s\n", malloc_str);

    /* Free the allocated memory */
    free(calloc_str);
    free(malloc_str);
    return 0;
}
