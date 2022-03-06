/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:35:48 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/19 10:52:38 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_queens_check(int board[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((y == board[i])
			|| (i + board[i] == x + y)
			|| (i - board[i] == x - y))
			return (0);
		i++;
	}
	return (1);
}

void	ft_queens_recursive(int	board[10], int *cnt, int p)
{
	int	i;
	int	j;

	if (p == 10)
	{
		(*cnt)++;
		j = 0;
		while (j < 10)
			ft_putchar(board[j++] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (ft_queens_check(board, p, i) == 1)
			{
				board[p] = i;
				ft_queens_recursive(board, cnt, p + 1);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	i;
	int	cnt;

	i = 0;
	while (i < 10)
		board[i++] = -1;
	cnt = 0;
	ft_queens_recursive(board, &cnt, 0);
	return (cnt);
}
