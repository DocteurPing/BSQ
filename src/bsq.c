/*
** bsq.c for BSQ in /home/cedric/Documents/CPE_2016_BSQ
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Wed Dec  7 13:57:55 2016 OGIRE Cedric
** Last update Mon Dec 12 18:11:42 2016 cedric
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
  int	fd;

  if (av[1])
    {
      fd = open(av[1], O_RDONLY);
      if (fd == -1)
	my_putstr_err("[ERROR]: Open problems\n");
      close(fd);
    }
  else
    my_putstr_err("[ERROR]: Need 2 arguments\n");
  return (0);
}
