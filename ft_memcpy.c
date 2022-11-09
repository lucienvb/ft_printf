/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_subcallen.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-bus <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:42:16 by lvan-bus      #+#    #+#                 */
/*   Updated: 2022/11/02 09:25:55 by lvan-bus      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*dest;
	char	*source;

	if (!dst && !src)
		return (0);
	dest = dst;
	source = src;
	while (n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (dst);
}
