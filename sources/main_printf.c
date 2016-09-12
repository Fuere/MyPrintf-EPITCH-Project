/*
** main.c for  in /home/sagot_g/rendu/PSU_2015_my_printf
**
** Made by guillaume sagot
** Login   <sagot_g@epitech.net>
**
** Started on  Mon Nov  2 09:58:39 2015 guillaume sagot
** Last update Fri Apr  1 21:56:14 2016 Guillaume SAGOT
*/

#include "printf.h"

void		errout(char *str)
{
  write(2, str++, 1);
}

int		flags_error(va_list ap)
{
  char		*str;

  str = va_arg(ap, char*);
  errout(str);
  return (my_strlen(str));
}

int		my_printf(const char *format, ...)
{
  t_count	count;
  va_list	ap;
  flag		*flag_ptr;

  init_flags(&count, &flag_ptr);
  va_start(ap, format);
  while (format[count.i] != '\0')
  {
    if (format[count.i] == '%')
    {
      count.i++;
      read_flags(format, &count, flag_ptr, ap);
    }
    else
    {
      my_putchar(format[count.i]);
      count.nb_char++;
    }
    count.i++;
  }
  va_end(ap);
  return (count.nb_char);
}
