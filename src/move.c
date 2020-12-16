/*
** EPITECH PROJECT, 2020
** move.c
** File description:
** navy game
*/

#include "../include/my.h"
#include "../include/navy.h"

int check_move(char move[4])
{
    if (!(move[0] >= 'A' && move[0] <= 'H')) {
        my_printf("wrong position\n");
        return (84);
    }
    if (!(move[1] >= '1' && move[1] <= '8')) {
        my_printf("wrong position\n");
        return (84);
    }
    if (move[2] != '\n') {
        my_printf("wrong position\n");
        return (84);
    }
    return (0);
}

char *ask_move(char move[4])
{
    do {
        my_printf ("attack: ");
        read(STDIN_FILENO, move, 5);
    } while (check_move(move));
    move[2] = 0;
    return (move);
}

void send_move(char move[4], int p2id)
{
    usleep(5000);
    kill(p2id, SIGUSR1);
    for (int i = 'A'; i < move[0]; i++) {
        usleep(5000);
        kill(p2id, SIGUSR2);
    }
    usleep(5000);
    kill(p2id, SIGUSR1);
    for (int i = '0'; i < move[1]; i++) {
        usleep(5000);
        kill(p2id, SIGUSR2);
    }
    usleep(5000);
    kill(p2id, SIGUSR1);
}

void get_move(char move[4], int curent_sig)
{
    struct sigaction s1;

    printf("waiting for enemy's attack...\n");
    s1.sa_sigaction = &send_mode;
    sigaction(SIGUSR1, &s1, NULL);
    signal(SIGUSR2, next_move);
    get_mode(0);
    pause();
    move[0] = '@';
    move[1] = '/';
    while ((curent_sig = get_mode(-2)) == 1) {
        move[0]++;
        pause();
    }
    while ((curent_sig = get_mode(-2)) == 2) {
        move[1]++;
        pause();
    }
}