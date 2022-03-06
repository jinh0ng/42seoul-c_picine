/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:39:05 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/22 10:06:38 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	ft_put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_put_number(int nbr)
{
	if (nbr > 9)
		ft_put_number(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_string(par[i].str);
		ft_put_string("\n");
		ft_put_number(par[i].size);
		ft_put_string("\n");
		ft_put_string(par[i].copy);
		ft_put_string("\n");
		i++;
	}
}
