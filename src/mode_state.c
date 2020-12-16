/*
** EPITECH PROJECT, 2020
** mode_state.c
** File description:
** navy game
*/

#include "../include/my.h"
#include "../include/navy.h"

int get_mode(int signal)
{
    static int mode = 0;

    if (signal == 0) {
        mode = 0;
        return (0);
    } else if (signal == -2) {
        return (mode);
    }
    mode++;
    return (mode);
}

void send_mode(int signal, siginfo_t *siginfo, void *data)
{
    get_mode(signal);
}