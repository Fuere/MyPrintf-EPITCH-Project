/*
** flags_third_part.c for  in /home/sagot_g/rendu/PSU_2015_my_printf
**
** Made by guillaume sagot
** Login   <sagot_g@epitech.net>
**
** Started on  Tue Nov  3 14:31:00 2015 guillaume sagot
** Last update Tue Jun  7 15:42:45 2016 Guillaume SAGOT
*/

#include "printf.h"

int		flags_i(va_list ap)
{
  return (my_put_nbr(va_arg(ap, int)));
}

int		flags_t(va_list ap)
{
  return (my_show_wordtab(va_arg(ap, char **)));
}

int		flags_ld(va_list ap)
{
  return (my_put_unsigned_long_int_base(va_arg(ap, long int), "0123456789"));
}

int		flags_f(va_list ap)
{
  return (my_put_float(va_arg(ap, double), 1000000));
}

int		flags_e(va_list ap)
{
  char		*str;

  str = va_arg(ap, char*);
  printerrno(str);
  return (my_strlen(str));
}
