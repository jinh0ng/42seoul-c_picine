/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:21:41 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/06 11:34:20 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	i_print(int i)
{
	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + i);
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('0' + i / 10);
		ft_putchar('0' + i % 10);
		ft_putchar(' ');
	}
}

void	j_print(int j)
{
	if (j < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + j);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('0' + j / 10);
		ft_putchar('0' + j % 10);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	while_print(int i, int j)
{
	if (! (i == 98 && j == 99))
	{
		i_print(i);
		j_print(j);
	}
	else if (i == 98 && j == 99)
	{
		ft_putchar('0' + i / 10);
		ft_putchar('0' + i % 10);
		ft_putchar(' ');
		ft_putchar('0' + j / 10);
		ft_putchar('0' + j % 10);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			while_print(i, j);
			j++;
		}
		i++;
	}
}
