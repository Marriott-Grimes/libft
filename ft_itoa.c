/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 18:11:20 by mgrimes           #+#    #+#             */
/*   Updated: 2016/09/27 18:11:22 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		extra_char(int sign)
{
	if (sign == -1)
		return (1);
	return (0);
}

static char		*special_cases(int n)
{
	char		*ans;

	if (n == -2147483648)
	{
		ans = ft_strnew(11);
		ans = ft_strcpy(ans,"-2147483648");
		return (ans);
	}
	if (n == 0)
	{
		ans = ft_strnew(1);
		ans = ft_strcpy(ans,"0");
		return (ans);
	}
	else
		return (NULL);
}

char			*ft_itoa(int n)
{
	char		*ans;
	char		*temp;
	char		*temp2;
	int			i;
	int			sign;
	int			size;
	
	i = 0;
	sign = 1;
	if (n == -2147483648 || n == 0)
		return (special_cases(n));
	temp = ft_strnew(10);
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	while (n > 0)
	{
		temp[i] = n % 10;
		n /= 10;
		i++;
	}
	size = i + extra_char(sign);
	ans = ft_strnew(size);
	i = 0;
	if (sign == -1)
	{
		ans[0] = '-';
		i++;
	}
	temp2 = &ans[i];
	temp2 = ft_strrev(temp2,temp);
	free(temp);
	return (ans);
}
