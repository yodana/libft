/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:43:52 by yodana            #+#    #+#             */
/*   Updated: 2018/11/21 18:03:54 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int start;
	char *new;
	size_t len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t' || s[start]))
		start++;
	len = ft_strlen(s);
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if ((!(new = (char*)malloc(sizeof(char) * len + 1))))
		return (NULL);
	return(ft_strsub(new, start, len));
}
	



