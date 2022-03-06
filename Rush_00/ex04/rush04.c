/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:38:13 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/08 16:50:05 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	ch);

void	line(int col, char start, char middle, char end)
{
	int	i;

	ft_putchar(start);
	i = 1;
	while (i < col - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (i < col)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	int	i;

	if (row <= 0 || col <= 0)
	{
		return ;
	}
	line(col, 'A', 'B', 'C');
	i = 1;
	while (i < row - 1)
	{
		line(col, 'B', ' ', 'B');
		i++;
	}
	if (i < row)
	{
		line(col, 'C', 'B', 'A');
	}
}
