/*
** algo.c for algo in /home/cedric/Documents/CPE_2016_BSQ
** 
** Made by cedric
** Login   <cedric@epitech.net>
** 
** Started on  Sat Dec 17 13:59:14 2016 cedric
** Last update Sun Dec 18 23:15:38 2016 cedric
*/

#include "bsq.h"
#include "my.h"

int get_size_line(const char *map) {
    int i;

    i = 0;
    while (map[i] != '\n') {
        i = i + 1;
    }
    i = i + 1;
    return (i);
}

char *put_cross(char *map, t_bsq *bsq) {
    int i;
    int x;
    i = 0;
    x = bsq->pos_square;
    while (x < bsq->pos_square + get_size_line(map) * bsq->size_square) {
        while (i < bsq->size - 1) {
            map[i + x] = 'x';
            i = i + 1;
        }
        i = 0;
        x = x + get_size_line(map);
    }
    return (map);
}

int check_square(char *map, t_bsq *bsq, size_t size) {
    int x;
    int i;
    int y;

    x = 0;
    i = bsq->pos;
    while ((x / get_size_line(map)) < bsq->size) {
        while (i < bsq->pos + bsq->size) {
            y = i + x;
            if (y > size || map[y] != '.')
                return (-1);
            i = i + 1;
        }
        i = bsq->pos;
        x = x + get_size_line(map);
    }
    return (0);
}

char *algo(char *map, size_t size) {
    t_bsq bsq;
    int check;

    bsq.size = 1;
    bsq.size_square = 0;
    bsq.size = 0;
    bsq.pos = 0;
    while (map[bsq.pos] != '\0') {
        check = check_square(map, &bsq, size);
        if (check == 0) {
            bsq.pos_square = bsq.pos;
            bsq.size_square = bsq.size;
            bsq.size = bsq.size + 1;
        } else
            bsq.pos = bsq.pos + 1;
    }
    map = put_cross(map, &bsq);
    return (map);
}
