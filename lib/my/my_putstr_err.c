/*
** my_putstr_err.c for my_putstr_err in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:11:17 2016 OGIRE Cedric
** Last update Sat Dec 17 15:21:29 2016 cedric
*/

#include "my.h"
#include <stdlib.h>

void	my_putstr_err(char *str)
{
  while (*str != '\0')
    {
      my_putchar_err(*str);
      str = str + 1;
    }
  exit (84);
}
