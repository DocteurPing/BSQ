/*
** my_printf.c for my_printf in /home/cedric
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Tue Nov  8 16:18:09 2016 OGIRE Cedric
** Last update Fri Nov 18 15:47:53 2016 OGIRE Cedric
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

void	my_printf2(char *str, va_list ap, int i)
{
  int	a;

  a = 0;
  if (str[i] != '\0' && str[i] == '%')
    {
      i = my_flag(str, i, ap, a);
      my_printf2(str, ap, i);
    }
  else if (i < my_strlen(str))
    {
      my_putchar(str[i]);
      i = i + 1;
      my_printf2(str, ap, i);
    }
  return;
}

void		my_printf(char *str, ...)
{
  va_list	ap;
  int		i;

  i = 0;
  va_start(ap, str);
  my_printf2(str, ap, i);
  va_end(ap);
}

int	my_flag(char *str, int i, va_list ap, int a)
{
  if (str[i + 1] == 's')
    {
      my_putstr(va_arg(ap, char *));
      a = a + 2;
    }
  else if (str[i + 1] == 'c')
    {
      my_putchar(va_arg(ap, int));
      a = a + 2;
    }
  else if (str[i + 1] == 'd' || str[i + 1] == 'i')
    {
      my_put_nbr(va_arg(ap, int));
      a = a + 2;
    }
  else if (str[i + 1] == 'o')
    {
      my_put_oct(va_arg(ap, int));
      a = a + 2;
    }
  a = my_flag2(str, i, ap, a);
  return (i + a);
}

int	my_flag2(char *str, int i, va_list ap, int a)
{
  if (str[i + 1] == 'X')
    {
      my_put_hexam(va_arg(ap, int));
      a = a + 2;
    }
  else if (str[i + 1] == 'x')
    {
      my_put_hexa(va_arg(ap, int));
      a = a + 2;
    }
  else if (str[i + 1] == 'b')
    {
      my_put_binary(va_arg(ap, int));
      a = a + 2;
    }
  else if (str[i + 1] == 'l' && str[i + 2] == 'd')
    {
      my_put_long(va_arg(ap, long));
      a = a + 3;
    }
  a = my_flag3(str, i, ap, a);
  return (a);
}

int	my_flag3(char *str, int i, va_list ap, int a)
{
  if (str[i + 1] == 'u')
    {
      my_put_unbr(va_arg(ap, unsigned int));
      a = a + 2;
    }
  else if (str[i + 1] == '%')
    {
      my_putchar('%');
      a = a + 2;
    }
  else if (str[i + 1] == 'p')
    {
      my_putstr("0x");
      my_put_hexa(va_arg(ap, long unsigned int));
      a = a + 2;
    }
  else if (str[i + 1] == 'S')
    {
      my_put_s(va_arg(ap, char *));
      a = a + 2;
    }
  return (a);
}
