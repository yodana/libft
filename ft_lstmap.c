/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:09:28 by yodana            #+#    #+#             */
/*   Updated: 2018/11/26 13:16:52 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *new;
	t_list *next_new;

	new = (t_list*)malloc(sizeof(t_list));
	new = f(lst);
	while (lst)
	{
		if (!(next_new = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		next_new = f(lst);
		next_new = next_new->next;
		lst = lst->next;
	}
	return (new);
}
