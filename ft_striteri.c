/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:07:20 by yodana            #+#    #+#             */
/*   Updated: 2018/11/24 16:24:53 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,char *))
{
	unsigned int i;

	i = 0;
	while (s != NULL && f != NULL && s[i])
	{
		f(i,&s[i]);
		i++;
	}
}

