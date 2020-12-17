/*
** EPITECH PROJECT, 2020
** navy.c
** File description:
** navy game
*/

#include "../include/my.h"
#include "../include/navy.h"

int main(int ac, char *av[])
{
    char *path = check_arg(ac, av);
    char map[2][8][8];
    net pids = {ac == 3 ? my_getnbr(av[1]) : getpid(), ac == 3 ? getpid() : 0,
        ac == 3 ? 0 : 1};

    load_map(path, map);
    connect_process(&pids);
    return (game(pids, map));
}