/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:18:45 by yodana            #+#    #+#             */
/*   Updated: 2018/11/23 16:41:56 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *new;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(new = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		new[i] = f(i,(char)s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
