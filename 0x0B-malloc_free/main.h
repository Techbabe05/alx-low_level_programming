#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void free_grid(int **grid, int height);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char **strtow(char *str);
int num_words(char *str);
int len(char *str);

#endif /* MAIN_H */
