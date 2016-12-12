/*
** my_revstr.c for my_revstr in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:12:51 2016 OGIRE Cedric
** Last update Thu Nov 17 10:47:17 2016 OGIRE Cedric
*/

#include "my.h"
#include <stdlib.h>

char	*my_revstr(char *str)
{
  int	iterator;
  int	str_len;
  char	*buffer;

  iterator = 0;
  str_len = my_strlen(str);
  buffer = malloc(sizeof(char) * (str_len + 1));
  my_strcpy(buffer, str);
  while (iterator < str_len)
    {
      str[iterator] = *(buffer + str_len - (iterator + 1));
      iterator++;
    }
  free(buffer);
  str[iterator] = '\0';
  return (str);
}
