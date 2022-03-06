/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:44:20 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/27 16:34:12 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_validate_operation(int b, char operator)
{
	if (operator == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (operator == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	ft_do_operation(int a, int b, char operator)
{
	int		result;

	result = 0;
	if (operator == '+')
		result = ft_add(a, b);
	else if (operator == '-')
		result = ft_minus(a, b);
	else if (operator == '/')
		result = ft_divide(a, b);
	else if (operator == '*')
		result = ft_multiply(a, b);
	else if (operator == '%')
		result = ft_modulo(a, b);
	ft_putnbr(result);
	ft_putchar('\n');
}

char	ft_find_operator(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (-1);
	return (str[0]);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		operator = ft_find_operator(argv[2]);
		if (ft_validate_operation(b, operator))
			ft_do_operation(a, b, operator);
	}
}
