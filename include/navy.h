/*
** EPITECH PROJECT, 2020
** navy.h
** File description:
** navy file functions
*/

#ifndef _NAVY
#define _NAVY
#include <sys/stat.h>
#include <ucontext.h>
typedef struct stat st;
typedef struct pos {
    int x;
    int y;
} pos;
typedef struct coords {
    pos a;
    pos b;
} coords;

/* USE THIS TO KILL A PROCESS WITH PID        
    kill(my_getnbr(path), SIGUSR1);
*/
//case bateau = 'val bateau' case vide = '.' case touchée = 'x'
void init_st(st *st, int ac, char *av[]);
char *check_arg(int ac, char *av[]);

int my_fopen(const char *filepath, const char accesmode);
int my_fclose(int file);
int my_fscanf(int file, const char *format, ...);


void load_map(char *path, char map[2][8][8]);
void show_map(char map[0][8][8]);
void print_win(int win);
void game(char map[2][8][8]);

void connect_process(int ac);
#endif
