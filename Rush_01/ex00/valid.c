/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:26:50 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/19 10:24:01 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern char	g_rkfh[5][5];
extern char	g_tpfh[5][5];
extern char	g_arr[16];
extern char	g_new_arr[4][4];
extern int	g_udlr[4][4];
extern int	g_answer;

void	print_rush(void)
{
	int		i;
	char	c;

	i = 0;
	while (i != 16)
	{
		c = g_new_arr[i / 4][i % 4] + '0';
		write(1, &c, 1);
		if (i % 4 == 3)
			write(1, "\n", 1);
		if (i % 4 != 3)
			write(1, " ", 1);
		i++;
	}
}

void	rush01(int z)
{
	int	i;

	i = 0;
	if (z == MAP_SIZE * MAP_SIZE)
	{
		while (i++ <= 15)
			g_new_arr[(i - 1) /a4][(i - 1) % 4] = g_arr[i - 1];
		if (!check_array())
			return ;
		print_rush();
		g_answer++;
	}
	i = 0;
	while (i++ < 4)
	{
		if (!g_rkfh[z % 4][i] && !g_tpfh[z / 4][i])
		{
			g_rkfh[z % 4][i] = 1;
			g_tpfh[z / 4][i] = 1;
			g_arr[z] = i;
			rush01(z + 1);
			g_rkfh[z % 4][i] = 0;
			g_tpfh[z / 4][i] = 0;
		}
	}
}

int	is_valid_input_number(int argc)
{
	if (argc != 2)
	{
		return (0);
	}
	return (1);
}

int	is_valid_input(int argc, char *argv[])
{
	int		cnt;
	int		i;
	int		space_or_number;

	cnt = 0;
	i = 0;
	space_or_number = 1;
	if (!is_valid_input_number(argc))
		return (0);
	while (argv[1][i] != '\0')
	{
		if ('1' <= argv[1][i] && argv[1][i] <= '4' && space_or_number)
		{
			space_or_number = 0;
			cnt++;
		}
		else if (argv[1][i] == ' ' && !space_or_number)
			space_or_number = 1;
		else
			return (0);
		i++;
	}
	if (cnt != 16)
		return (0);
	return (1);
}

void	udlr_init(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ')
		{
			i++;
			continue ;
		}
		g_udlr[i / 8][i / 2 % 4] = argv[1][i] - '0';
		i++;
	}
}
