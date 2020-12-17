/*
** EPITECH PROJECT, 2020
** load_map.c
** File description:
** navy game load map
*/

#include "../include/my.h"
#include "../include/navy.h"

void load_boats(char map[2][8][8], char buff[32])
{
    for (int i = buff[10] - 'A'; i <= buff[13] - 'A'; i++)
        for (int b = buff[11] - '1'; b <= buff[14] - '1'; b++)
            map[0][i][b] = '3';
    for (int i = buff[18] - 'A'; i <= buff[21] - 'A'; i++)
        for (int b = buff[19] - '1'; b <= buff[22] - '1'; b++)
            map[0][i][b] = '4';
    for (int i = buff[26] - 'A'; i <= buff[29] - 'A'; i++)
        for (int b = buff[27] - '1'; b <= buff[30] - '1'; b++)
            map[0][i][b] = '5';
}

void load_map(char *path, char map[2][8][8])
{
    char buff[32] = {0};
    int file = my_fopen(path, 'r');

    read(file, buff, 32);
    //check_file(buff);
    for (int i = 0; i < 8; i++)
        for (int b = 0; b < 8; b++) {
            map[0][i][b] = '.';
            map[1][i][b] = '.';
        }
    map[0][buff[2] - 'A'][buff[3] - '1'] = '2';
    map[0][buff[5] - 'A'][buff[6] - '1'] = '2';
    load_boats(map, buff);
}

int check_file(char buff[32])
{
    for (int i = 0; i < 32; i++)
        my_printf("buff[%d]=%c\n", i, buff[i]);
    if (!(buff[0] == '2' && buff[1] == buff[4] == buff[9] == buff[12] == ':'))
        my_ferror("wrong map");
    if (!(buff[8] == '3' && buff[17] == buff[20] == buff[25] == ':'))
        my_ferror("wrong map");
    return (0);
}
