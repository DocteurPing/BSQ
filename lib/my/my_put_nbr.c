/*
** my_put_nbr.c for my_put_nbr in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:10:42 2016 OGIRE Cedric
** Last update Thu Nov 17 10:46:53 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_nbr2(int nb)
{
  if (nb / 10)
    my_put_nbr2(nb / 10);
  my_putchar(nb % 10 + '0');
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  my_put_nbr2(nb);
}
