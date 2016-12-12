/*
** my_put_binary.c for my_put_binary in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Tue Nov 15 17:03:02 2016 OGIRE Cedric
** Last update Thu Nov 17 10:16:21 2016 OGIRE Cedric
*/

#include <stdlib.h>
#include "my.h"

char	*my_put_binary2(int nb, int a, char *result)
{
  if (nb % 2 == 1)
    {
      result[a] = '1';
      nb = (nb - 1) / 2;
    }
  else
    {
      result[a] = '0';
      nb = nb / 2;
    }
  a = a + 1;
  if (nb <= 0)
    return (result);
  else
    my_put_binary2(nb, a, result);
}

void	my_put_binary(int nb)
{
  char	*result;
  int	tmp;
  int	i;
  int	a;

  i = a = 0;
  tmp = nb;
  while (tmp != 0)
    {
      tmp = tmp / 2;
      i = i + 1;
    }
  result = malloc(sizeof(char) * (i + 2));
  result = my_put_binary2(nb, a, result);
  my_revstr(result);
  my_putstr(result);
}
