/*
** EPITECH PROJECT, 2020
** my_connect_utils.c
** File description:
** connection utils to communicate between process
*/

#include "../include/my.h"
#include "../include/navy.h"

void connect_process(int ac)
{
    my_printf("my_pid: %d\n", getpid());
    if (ac < 3) {
        my_printf("waiting for ennemy connection...\n\n");
        my_printf("enemy connected\n");
    } else {
        my_printf("successfully connected\n");
    }
}