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
    int p2 = (ac == 3) ? my_getnbr(av[1]) : 0;

    //check_file(path);
    connect_process(ac);
    load_map(path, map);
    game(map);
    return (0);
}