/*
** my_put_long.c for my_put_long in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Wed Nov 16 13:46:53 2016 OGIRE Cedric
** Last update Wed Nov 16 18:02:15 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_long2(long nb)
{
  if (nb / 10)
    my_put_long2(nb / 10);
  my_putchar(nb % 10 + '0');
}
void	my_put_long(long nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  my_put_long2(nb);
}
