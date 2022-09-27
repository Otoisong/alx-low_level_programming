#ifndef MAIN_H
#define MAIN_H 

/**
 * This is main.h file
 * Athor: Otobong Isong
 * description: Header file containing prototypes of all the functions
 * used in the ALX project 0x06-pointers_arrays_strings
 * void prototype and int prototype
 */

#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
