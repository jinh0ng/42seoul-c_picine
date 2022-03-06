/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:38:13 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/08 16:48:28 by yejhong          ###   ########.fr       */
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
	line(col, '/', '*', '\\');
	i = 1;
	while (i < row - 1)
	{
		line(col, '*', ' ', '*');
		i++;
	}
	if (i < row)
	{
		line(col, '\\', '*', '/');
	}
}
