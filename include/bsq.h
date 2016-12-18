/*
** bsq.h for bsq in /home/cedric/Documents/CPE_2016_BSQ
** 
** Made by cedric
** Login   <cedric@epitech.net>
** 
** Started on  Sat Dec 17 13:43:01 2016 cedric
** Last update Sun Dec 18 22:03:53 2016 cedric
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <stdlib.h>

typedef struct	s_bsq
{
  int		size;
  int		pos;
  int		pos_square;
  int		size_square;
}		t_bsq;

char	*algo(char *map);
int	check_error(char **av);

#endif
