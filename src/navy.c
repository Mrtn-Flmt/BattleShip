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
    my_printf("%s\n", path);
    connect_process(ac);
    /* USE THIS TO KILL A PROCESS WITH PID        
        kill(my_getnbr(path), 9);
    */
    return (0);
}