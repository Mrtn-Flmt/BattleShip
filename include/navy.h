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

typedef struct net {
    int p1;
    int p2;
    int pone;
    int pnb;
} net;

void init_st(st *st, int ac, char *av[]);
char *check_arg(int ac, char *av[]);
int check_file(char buff[32]);

int my_fopen(const char *filepath, const char accesmode);
int my_fclose(int file);
int my_fscanf(int file, const char *format, ...);


void load_map(char *path, char map[2][8][8]);
void show_map(char map[2][8][8]);

void connect_process(net *pids);
int get_mode(int signal);
void send_mode(int signal, siginfo_t *siginfo, void *data);
int check_move(char move[4]);
char *ask_move(char move[4]);
void send_move(char move[4], int p2id);
void get_move(char move[4], int curent_sig);


int check_pos(char c);
int check_hit(char map[2][8][8], char move[4], int x[2]);
int apply_move(char map[2][8][8], char move[4], int mode);

void game(net pids, char map[2][8][8]);
void game_p1(net pids, char map[2][8][8], int *win);
void game_p2(net pids, char map[2][8][8], int *win);

void print_win(int win);
int check_win(char map[2][8][8]);

void send_hit(int hit, int p2id);
int get_hit(int curent_sig);
void next_move(int signum);
#endif
