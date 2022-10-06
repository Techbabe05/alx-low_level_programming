#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int find_len(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *iterate_zeroes(char *str);
char *create_xarray(int size);
void add_nums(char *final_prod, char *next_prod, int next_len);
void get_prod(char *prod, char *mult, int digit, int zeroes);

#endif /*MAIN_H*/
