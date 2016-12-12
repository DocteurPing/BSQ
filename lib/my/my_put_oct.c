/*
** my_put_oct.c for oct in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov 14 14:10:16 2016 OGIRE Cedric
** Last update Fri Nov 18 10:47:29 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_oct(int nb)
{
  int   oct;
  int   i;

  oct = 0;
  i = 1;
  while (nb != 0)
    {
      oct = oct + (nb % 8) * i;
      nb = nb / 8;
      i = i * 10;
    }
  if (oct < 10)
    my_putstr("00");
  else if (oct < 100)
    my_putstr("0");
  my_put_nbr(oct);
}
