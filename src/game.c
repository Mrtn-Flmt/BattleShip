/*
** EPITECH PROJECT, 2020
** game.c
** File description:
** navy game
*/

#include "../include/my.h"
#include "../include/navy.h"

void print_win(int win)
{
    if (win == 1) {
        my_printf("I won\n");
    } else
        my_printf("Enemy won\n");
}

void sig1(int sig)
{
    my_printf("lol\n");
}

void game(char map[2][8][8])
{
    int win = 0;
    struct sigaction sa = { 0 };
    sa.sa_handler = &sig1;

    signal(SIGUSR1, &sa);
    while (win == 0)
    {
        win = -1;
    }
    print_win(win);
}

