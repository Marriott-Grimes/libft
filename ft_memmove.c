/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 12:50:59 by mgrimes           #+#    #+#             */
/*   Updated: 2016/09/25 12:51:14 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	int				count;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	count = len;
	if (dest < source)
	{
		while (i++ < len)
			dest[i] = source[i];
	}
	else
	{
		while (count >= 0)
		{
			dest[count] = source[count];
			count--;
		}
	}
	return (dst);
}
