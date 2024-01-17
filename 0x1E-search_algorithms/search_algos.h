#ifndef SEARCH_ALGOS_h
#define SEARCH_ALGOS_h

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
