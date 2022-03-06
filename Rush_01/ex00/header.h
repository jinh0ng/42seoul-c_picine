/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:26:12 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/16 18:26:16 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define	HEADER_H

# include	<unistd.h>

# define	MAP_SIZE	4

extern char	g_rkfh[5][5];
extern char	g_tpfh[5][5];
extern char	g_arr[16];
extern char	g_new_arr[4][4];
extern int	g_udlr[4][4];
extern int	g_answer;

int		check_colup(char (*arr)[4]);
int		check_coldown(char (*arr)[4]);
int		check_rowleft(char (*arr)[4]);
int		check_rowright(char (*arr)[4]);
int		check_array(void);
void	print_rush(void);
void	rush01(int z);
int		is_valid_input_number(int argc);
int		is_valid_input(int argc, char *argv[]);
void	udlr_init(char **argv);
int		push(char c, char *stack, int top);
int		clear_st(char *stack);

#endif
