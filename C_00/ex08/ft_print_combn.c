/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:16:13 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/08 17:12:00 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb_print(int n, int nprint[])
{
	int	i;
	int	end;

	i = 0;	
	while (i < n)
	{
		ft_putchar(nprint[i]);
		i++;
	}
	i--;
	end = 1;
	while (i >= 0)
	{
		if (nprint[i] != 10 - (n - i))
		{
			end = 0;
			break ;
		}
	}
	if (end == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	recursion(int n, int curr, int nprint[], int start)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	if (curr == n)
	{
		comb_print(n, nprint);
	}
	else
	{
		i = start;
		max = 10 - (n - curr);
		while (i <= max)
		{
			nprint[curr] = i;
			recursion(n, curr + 1, nprint, start + 1);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	nprint[10];
	int	i;

	i = 0;
	while (i < n)
	{
		nprint[i] = 0;
		i++;
	}
	recursion(n, 0, nprint, -1);
}
