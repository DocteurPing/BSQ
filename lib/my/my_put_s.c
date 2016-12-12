/*
** my_put_s.c for my_put_s.c in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Thu Nov 17 17:09:16 2016 OGIRE Cedric
** Last update Fri Nov 18 10:56:24 2016 OGIRE Cedric
*/

#include "my.h"

void	my_put_s2(char *str, int i)
{
  if (str[i] > 32 && str[i] < 127 && str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
      my_put_s2(str, i);
    }
  else if (str[i] != '\0')
    {
      my_putchar('\\');
      my_put_oct(str[i]);
      i = i + 1;
      my_put_s2(str, i);
    }
  return;
}

void	my_put_s(char *str)
{
  int	i;

  i = 0;
  my_put_s2(str, i);
}
