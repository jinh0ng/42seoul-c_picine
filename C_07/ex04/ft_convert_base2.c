/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:26:56 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/22 20:28:27 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	is_base_valid(char *str)
{
	int		i;
	int		j;

	if (!str || ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (is_space(str[i]) || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

int	calc_nbr_len(unsigned int nbr, int base_len, int is_minus)
{
	unsigned int	len;

	len = is_minus;
	while (1)
	{
		len++;
		if (nbr / base_len == 0)
			break ;
		nbr /= base_len;
	}
	return (len);
}
