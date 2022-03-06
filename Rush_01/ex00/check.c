/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:26:00 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/16 18:26:06 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern int	g_udlr[4][4];

int	check_colup(char arr[][4])
{
	int		i;
	int		c;
	char	stack[4];
	int		top;

	c = 0;
	while (c < 4)
	{
		top = clear_st(stack);
		i = 0;
		while (i < 4)
		{
			top = push(arr[i++][c], stack, top);
			if (top + 1 > g_udlr[0][c])
				return (0);
		}
		if (top + 1 != g_udlr[0][c])
			return (0);
		c++;
	}
	return (1);
}

int	check_coldown(char arr[][4])
{
	int		i;
	int		c;
	char	stack[4];
	int		top;

	c = 0;
	while (c < 4)
	{
		top = clear_st(stack);
		i = 3;
		while (i >= 0)
		{
			top = push(arr[i--][c], stack, top);
			if (top + 1 > g_udlr[1][c])
				return (0);
		}
		if (top + 1 != g_udlr[1][c])
			return (0);
		c++;
	}
	return (1);
}

int	check_rowleft(char arr[][4])
{
	int		i;
	int		r;
	char	stack[4];
	int		top;

	r = 0;
	while (r < 4)
	{
		top = clear_st(stack);
		i = 0;
		while (i < 4)
		{
			top = push(arr[r][i++], stack, top);
			if (top + 1 > g_udlr[2][r])
				return (0);
		}
		if (top + 1 != g_udlr[2][r])
			return (0);
		r++;
	}
	return (1);
}

int	check_rowright(char arr[][4])
{
	int		i;
	int		r;
	char	stack[4];
	int		top;

	r = 0;
	while (r < 4)
	{
		top = clear_st(stack);
		i = 3;
		while (i >= 0)
		{
			top = push(arr[r][i--], stack, top);
			if (top + 1 > g_udlr[3][r])
				return (0);
		}
		if (top + 1 != g_udlr[3][r])
			return (0);
		r++;
	}
	return (1);
}

int	check_array(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = check_colup(g_new_arr);
	b = check_coldown(g_new_arr);
	c = check_rowleft(g_new_arr);
	d = check_rowright(g_new_arr);
	if (a * b * c * d)
		return (1);
	return (0);
}
