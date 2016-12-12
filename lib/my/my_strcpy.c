/*
** my_strcpy.c for my_strcpy in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov  7 14:20:08 2016 OGIRE Cedric
** Last update Wed Nov 16 14:28:02 2016 OGIRE Cedric
*/

char	*my_strcpy(char *dest, char *src)
{
  int	iterator;

  iterator = 0;
  while (*(src + iterator) != '\0')
    {
      *(dest + iterator) = *(src + iterator);
      iterator = iterator + 1;
    }
  *(dest + iterator) = '\0';
  return (dest);
}
