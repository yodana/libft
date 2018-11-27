/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:50:44 by yodana            #+#    #+#             */
/*   Updated: 2018/11/27 20:00:11 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	unsigned int		res;
	int					i;
	int					sign;

	sign = 1;
	i = 0;
	res = 0;
	while (nptr[i] <= 32 && nptr[i] >= 0 && nptr[i] != '\e')
		i++;
	if (nptr[i] == '+')
		i++;
	if (nptr[i] == '-' && nptr[i - 1] != '+')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit((int)nptr[i]))
	{
		res = res * 10;
		res = res + (nptr[i] - '0');
		i++;
	}
	return ((int)res * sign);
}
