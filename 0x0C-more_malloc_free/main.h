#ifndef _MAIN_H
#define _MAIN_H
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]);
void intial(char *pnt, int d);
void _move(char *mv, int k);
char *mul(char d, char *na, int num_in, char *din, int d_in);
int check_num(char **ls);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
