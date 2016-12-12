/*
** my_strlen.c for my_strlen in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:22:09 2016 OGIRE Cedric
** Last update Wed Nov 16 14:27:13 2016 OGIRE Cedric
*/

int	my_strlen(char *str)
{
  int	iterator;

  iterator = 0;
  while (*str != '\0')
    {
      str = str + 1;
      iterator = iterator + 1;
    }
  return (iterator);
}
