/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcolor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:04:39 by yodana            #+#    #+#             */
/*   Updated: 2018/12/04 16:18:37 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printcolor(char *str, char *color)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(END_COLOR);
}
