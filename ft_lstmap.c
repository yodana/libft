/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:09:28 by yodana            #+#    #+#             */
/*   Updated: 2018/11/24 18:29:06 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *new;

	while (lst)
	{
		new = (t_list*)malloc(sizeof(t_list));
		new = f(lst);
		new = ->next;
		lst = lst->next;
	}
	return (new);
}
