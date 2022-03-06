/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jashin <jashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:01:42 by jashin            #+#    #+#             */
/*   Updated: 2022/01/16 18:26:24 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

char	g_rkfh[5][5];
char	g_tpfh[5][5];
char	g_arr[16];
char	g_new_arr[4][4];
int		g_answer;
int		g_udlr[4][4];

int	main(int argc, char **argv)
{
	int	validation;

	validation = is_valid_input(argc, argv);
	if (!validation)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	udlr_init(argv);
	rush01(0);
	if (!g_answer)
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
