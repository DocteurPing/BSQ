/*
** my_putchar.c for my_putchar in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:09:59 2016 OGIRE Cedric
** Last update Mon Nov  7 14:10:00 2016 OGIRE Cedric
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
