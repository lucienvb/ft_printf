/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-bus <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 10:06:15 by lvan-bus      #+#    #+#                 */
/*   Updated: 2022/11/07 14:11:47 by lvan-bus      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//DEFINE PERCENTAGE SIGN (PS)
# ifndef PS
#  define PS '%'
# endif

//INCLUDE
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <limits.h>

//PRINTF
int		ft_printf(const char *s, ...);

//UTILS -- FT_HEX
int		put_hex(va_list ap);
int		put_hex_upper(va_list ap);
int		put_ptr(va_list ap);

//UTILS -- FT_ITOA
char	*ft_itoa(int n);
char	*ft_utoa(int n);

//UTILS -- FT_MEMCPY
void	*ft_memcpy(void *dst, void *src, size_t n);

//UTILS -- FT_PUTS
int		put_str(va_list ap);
int		put_chr(va_list ap);
int		put_int(va_list ap);
int		put_uint(va_list ap);
int		write_chr(char c);

//UTILS -- FT_STR
void	str_toupper(char *s);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
