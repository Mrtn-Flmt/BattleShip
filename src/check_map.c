/*
** EPITECH PROJECT, 2020
** check_map
** File description:
** check buff in map
*/

#include "../include/my.h"
#include "../include/navy.h"

int check_file(char buff[32])
{
    if (!(buff[0] == '2' && buff[1] == ':' && buff[4] == ':' && buff[9] == ':' && buff[12] == ':'))
        my_ferror("wrong map");
    if (!(buff[8] == '3' && buff[17] == ':' && buff[20] == ':' && buff[25] == ':'))
        my_ferror("wrong map");
    if (!(buff[16] == '4' && buff[24] == '5'))
        my_ferror("wrong map");
    check_vars(buff);
    return (0);
}

void check_vars(char buff[32])
{
    check_char(buff[2], buff[5]);
    check_char(buff[10], buff[13]);
    check_char(buff[18], buff[21]);
    check_char(buff[26], buff[29]);
    check_nb(buff[3], buff[6]);
    check_nb(buff[11], buff[14]);
    check_nb(buff[19], buff[22]);
    check_nb(buff[27], buff[30]);
}

void check_char(char a, char b)
{
    if (a < 'A' || a > 'H')
        my_ferror("wrong map");
    if (b < 'A' || b > 'H')
        my_ferror("wrong map");
}

void check_nb(char a, char b)
{
    if (a < '0' || a > '8')
        my_ferror("wrong map");
    if (b < '0' || b > '8')
        my_ferror("wrong map");
}