/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:03:18 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/06 10:18:19 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	while_print(int a, int b, int c)
{
	if (a < b && b < c)
	{
		ft_putchar('0' + a);
		ft_putchar('0' + b);
		ft_putchar('0' + c);
		if (! (a == 7 && b == 8 && c == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				while_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
