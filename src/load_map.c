/*
** EPITECH PROJECT, 2020
** load_map.c
** File description:
** navy game load map
*/

#include "../include/my.h"
#include "../include/navy.h"

int load_boats(char map[2][8][8], char buff[32])
{
    int b;
    int i;

    for (i = buff[10] - 'A'; i <= buff[13] - 'A'; i++)
        for (b = buff[11] - '1'; b <= buff[14] - '1'; b++)
            map[0][i][b] = '3';
    if (b != 3 && i != 3)
            return (84);
    for (i = buff[18] - 'A'; i <= buff[21] - 'A'; i++)
        for (b = buff[19] - '1'; b <= buff[22] - '1'; b++)
            map[0][i][b] = '4';
    if (b != 4 && i != 4)
            return (84);
    for (i = buff[26] - 'A'; i <= buff[29] - 'A'; i++)
        for (b = buff[27] - '1'; b <= buff[30] - '1'; b++)
            map[0][i][b] = '5';
    if (b != 5 && i != 5)
        return (84);
    return (0);
}

int load_map(char *path, char map[2][8][8])
{
    char buff[32] = {0};
    int file = my_fopen(path, 'r');

    read(file, buff, 32);
    if (check_file(buff) == 84)
        return (84);
    for (int i = 0; i < 8; i++)
        for (int b = 0; b < 8; b++) {
            map[0][i][b] = '.';
            map[1][i][b] = '.';
        }
    map[0][buff[2] - 'A'][buff[3] - '1'] = '2';
    map[0][buff[5] - 'A'][buff[6] - '1'] = '2';
    return (load_boats(map, buff));
}
