/*
** my_put_hexa.c for put_haxa in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Wed Nov 16 17:26:49 2016 OGIRE Cedric
** Last update Fri Nov 18 15:41:26 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_hexa(long nb)
{
  long	beg;
  long	end;
  char	base[] = "0123456789abcdef";

  end = nb % 16;
  beg = (nb - end) / 16;
  if (beg)
    my_put_hexa(beg);
  my_putchar(base[end]);
}
