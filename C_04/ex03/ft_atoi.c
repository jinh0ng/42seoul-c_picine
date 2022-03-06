/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:50:56 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/18 11:13:39 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return ((c == ' ') || (c >= 9 && c <= 13));
}

int	is_operator(char c)
{
	return ((c == '+' || c == '-'));
}

int	is_num(char c)
{
	return ((c >= '0' && c <= '9'));
}

int	ft_atoi(char *str)
{
	int	mark;
	int	num;
	int	i;

	mark = 1;
	num = 0;
	i = 0;
	while (is_space(str[i]))
		i++;
	while (is_operator(str[i]))
	{
		if (str[i] == '-')
			mark *= (-1);
		i++;
	}
	while (is_num(str[i]))
	{
		num = 10 * num + (str[i] - '0');
		i++;
	}
	return (num * mark);
}
