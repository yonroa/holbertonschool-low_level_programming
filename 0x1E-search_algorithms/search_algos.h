#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int init, int end);
int jump_search(int *array, size_t size, int value);
int min(int a, int b);
#endif
