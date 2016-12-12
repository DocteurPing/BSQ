/*
** my_putchar_err.c for my_putchar_err in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:10:25 2016 OGIRE Cedric
** Last update Mon Nov  7 14:10:29 2016 OGIRE Cedric
*/

#include <unistd.h>

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}
