/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:02:24 by yodana            #+#    #+#             */
/*   Updated: 2018/11/26 17:16:12 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*new;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	i = ft_strlen(str) - 1;
	j = 0;
	if (!(new = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (i >= 0)
	{
		new[j] = str[i];
		j++;
		i--;
	}
	return (new);
}
