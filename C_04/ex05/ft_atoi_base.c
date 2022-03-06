/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:16:00 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/15 21:43:10 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base(char *base, char match)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (-1);
}

int	is_base_valid(char *str)
{
	char	*curr;
	int		i;
	int		j;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*curr)
	{
		if (is_space(*curr) || *curr == '+' || *curr == '-')
			return (0);
		curr++;
	}
	i = 0;
	while (i < curr - str)
	{
		j = i + 1;
		while (j < curr - str)
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	answer;
	int	is_minus;

	if (!is_base_valid(base))
		return (0);
	base_size = ft_strlen(base);
	answer = 0;
	is_minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_minus *= -1;
		str++;
	}
	while (ft_base(base, *str) != -1)
	{
		answer *= base_size;
		answer += ft_base(base, *str);
		str++;
	}
	return (answer * is_minus);
}
