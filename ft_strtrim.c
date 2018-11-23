/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:43:52 by yodana            #+#    #+#             */
/*   Updated: 2018/11/23 11:40:53 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strtrim(char const *s)
{
	int start;
	char *new;
	size_t len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t') && s[start])
		start++;
	len = ft_strlen(s);
	while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n' || s[len] == '\0') && len > 0)
		len--;
	len++;
	if ((!(new = (char*)malloc(sizeof(char) * (len - start) + 1))))
		return (NULL);
	new = ft_strsub(s, start, len - start);
	new[len] = '\0';
	return (new);
}
