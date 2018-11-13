/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:19:56 by yodana            #+#    #+#             */
/*   Updated: 2018/11/13 16:43:32 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)src)[i] == ((unsigned char)c))
		{
			((char*)dest)[i] = ((const char*)src)[i];
			return (dest + i + 1);
		}
		else
			((char*)dest)[i] = ((const char*)src)[i];
		i++;
	}
	return (NULL);
}
