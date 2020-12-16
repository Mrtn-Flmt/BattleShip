/*
** EPITECH PROJECT, 2020
** navy_check.c
** File description:
** navy check arg
*/

#include "../include/my.h"
#include "../include/navy.h"

// should check if file correspond to the string format
// void check_file();

// check if user input is correct or requesting help
char *check_arg(int ac, char *av[])
{
    if (ac > 3 || ac < 2) {
        my_ferror("Wrong nb of argument. Try ./navy -h");
    } else if (!my_strcmp("-h", av[1])) {
        my_printf("USAGE\n\t./navy [first_player_pid] navy_positions\nDESCRI");
        my_printf("TION\n\tfirst_player_pid: only for the 2nd player. pid of");
        my_printf(" the first player.\n\tnavy_positions: file representing t");
        my_printf("he positions of the ships.\n");
        exit(0);
    }
    if (ac == 3 && !my_str_isnum(av[1]))
        my_ferror("Argument 1 must be a number. Try ./navy -h");
    if (ac == 3)
        return (av[2]);
    return(av[1]);
}