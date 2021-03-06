/*
** bsq.c for BSQ in /home/cedric/Documents/CPE_2016_BSQ
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Wed Dec  7 13:57:55 2016 OGIRE Cedric
** Last update Sun Dec 18 23:04:50 2016 cedric
*/

#include "my.h"
#include "bsq.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		bsq(char **av)
{
  int		fd;
  struct stat	*buffer;
  char		*map;
  char		*map2;
  int		i;;

  i = 0;
  fd = open(av[1], O_RDONLY);
  buffer = malloc(sizeof(struct stat));
  stat(av[1], buffer);
  map = malloc(sizeof(char) * (buffer->st_size + 2));
  read(fd, map, buffer->st_size);
  map[buffer->st_size + 1] = '\0';
  while (map[i] != '\n')
    i = i + 1;
  map2 = &map[i + 1];
  map2 = algo(map2);
  my_printf("%s", map2);
  close(fd);
}

int	main(int ac, char **av)
{
  int	fd;

  if (ac == 2)
    {
      fd = open(av[1], O_RDONLY);
      if (fd == -1)
	my_putstr_err("[ERROR]: Open problems\n");
      close(fd);
    }
  else
    my_putstr_err("[ERROR]: Need 2 arguments\n");
  check_error(av);
  bsq(av);
  return (0);
}
