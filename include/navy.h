/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** bsq file functions
*/

#ifndef _NAVY
#define _NAVY
#include <sys/stat.h>
typedef struct stat st;

void init_st(st *st, int ac, char *av[]);
char *check_arg(int ac, char *av[]);

int my_fopen(const char *filepath, const char accesmode);
int my_fclose(int file);
int my_fscanf(int file, const char *format, ...);

void connect_process(int ac);
#endif
