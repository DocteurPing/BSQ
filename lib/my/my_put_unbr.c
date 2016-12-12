/*
** my_put_unbr.c for unbr in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Wed Nov 16 18:05:01 2016 OGIRE Cedric
** Last update Wed Nov 16 18:14:54 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_unbr2(unsigned int nb)
{
  if (nb / 10)
    my_put_unbr2(nb / 10);
  my_putchar(nb % 10 + '0');
}

void	my_put_unbr(unsigned int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  my_put_unbr2(nb);
}
