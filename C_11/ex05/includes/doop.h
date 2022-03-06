/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:14:41 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/27 16:31:35 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>
# include <stdlib.h>

int		ft_validate_operation(int b, char operator);
void	ft_do_operation(int a, int b, char operator);
char	ft_find_operator(char *str);

int		ft_is_number(char c);
int		ft_is_space(char c);
int		ft_atoi(char *str);

int		ft_add(int a, int b);
int		ft_minus(int a, int b);
int		ft_divide(int a, int b);
int		ft_multiply(int a, int b);
int		ft_modulo(int a, int b);

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
