/*
** my_putstr.c for my_put_str in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:10:55 2016 OGIRE Cedric
** Last update Thu Nov 17 10:47:04 2016 OGIRE Cedric
*/

#include "my.h"

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
  return (0);
}
