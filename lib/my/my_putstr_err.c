/*
** my_putstr_err.c for my_putstr_err in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:11:17 2016 OGIRE Cedric
** Last update Mon Nov 28 14:53:39 2016 OGIRE Cedric
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
}
