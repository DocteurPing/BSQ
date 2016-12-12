/*
** my_put_hexam.c for my_put_hexam.c in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Wed Nov 16 17:54:03 2016 OGIRE Cedric
** Last update Wed Nov 16 18:15:55 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_hexam(int nb)
{
  int   beg;
  int   end;
  char  base[] = "0123456789ABCDEF";

  end = nb % 16;
  beg = (nb - end) / 16;
  if (beg)
    my_put_hexam(beg);
  my_putchar(base[end]);
}
