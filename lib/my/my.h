/*
** my.h for my.h in /home/cedric/Documents/PSU_2016_my_printf
** 
** Made by OGIRE Cedric
** Login   <cedric@epitech.net>
** 
** Started on  Mon Nov 14 14:33:31 2016 OGIRE Cedric
** Last update Sat Dec 17 13:49:46 2016 cedric
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>

void	my_putchar(char c);
void	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
void	my_printf(char *str, ...);
void	my_put_oct(int nb);
void	my_put_base(int nb, char *str);
char	*my_revstr(char *str);
char	*my_strcpy(char *dest, char *src);
void	my_put_binary(int nb);
void	my_put_long(long n);
void	my_put_hexa(long nb);
void	my_put_hexam(int nb);
void	my_put_unbr(unsigned int nb);
int	my_flag(char *str, int i, va_list ap, int a);
int	my_flag2(char *str, int i, va_list ap, int a);
int	my_flag3(char *str, int i, va_list ap, int a);
void	my_put_s(char *str);
void	my_put_adress(va_list ap);
void	my_putstr_err(char *str);
void	my_putchar_err(char c);
#endif
