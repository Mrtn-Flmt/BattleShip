/*
** EPITECH PROJECT, 2020
** move2.c
** File description:
** navy game
*/

#include "../include/my.h"
#include "../include/navy.h"

void next_move(int signum)
{
    signum++;
    return;
}

int get_hit(int curent_sig)
{
    struct sigaction s1;
    int hit = -1;

    s1.sa_sigaction = &send_mode;
    sigaction(SIGUSR1, &s1, NULL);
    signal(SIGUSR2, next_move);
    get_mode(0);
    pause();
    while ((curent_sig = get_mode(-2)) == 1) {
        hit++;
        pause();
    }
    return (hit);
}

void send_hit(int hit, int p2id)
{
    usleep(5000);
    kill(p2id, SIGUSR1);
    if (hit) {
        usleep(5000);
        kill(p2id, SIGUSR2);
    }
    usleep(5000);
    kill(p2id, SIGUSR1);
    usleep(5000);

}