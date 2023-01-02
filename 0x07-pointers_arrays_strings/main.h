#ifndef main_h
#define main_h

int _putchar(char c);
char *_memset(char *x, char ch, unsigned int n);
char *_memcpy(char *x, char *y, unsigned int num);
char *_strchr(char *ch1, char ch2);
unsigned int _strspn(char *ch1, char *ch2);
char *_strpbrk(char *ch1, char *ch2);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
#endif
