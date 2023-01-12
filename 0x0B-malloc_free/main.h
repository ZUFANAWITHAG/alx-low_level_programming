#ifndef MAIN_H
#define MAIN_H

void free_grid(int **grid, int height);
char *str_concat(char *sl, char *s2);
char *_strdup(char *str);
int _putchar(char c);
char *creat_arry(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);

#endif
