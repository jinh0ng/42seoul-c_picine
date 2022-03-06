/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:21:17 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/22 20:26:21 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		calc_nbr_len(unsigned int nbr, int base_len, int is_minus);
int		is_space(char c);
int		is_base_valid(char *str);

int	calc_base(char *base, char match)
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

char	*base_machine(char *base, unsigned int nbr, int is_minus)
{
	int		i;
	int		base_len;
	int		len;
	char	*str;

	base_len = ft_strlen(base);
	len = calc_nbr_len(nbr, base_len, is_minus);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (is_minus)
		str[0] = '-';
	i = is_minus;
	while (i < len)
	{
		str[len - (!is_minus) - i++] = base[nbr % base_len];
		nbr /= base_len;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				is_minus;
	unsigned int	result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	result = 0;
	is_minus = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*(nbr++) == '-')
			is_minus *= -1;
	}
	while (calc_base(base_from, *nbr) != -1)
	{
		result = result * ft_strlen(base_from) + calc_base(base_from, *nbr);
		nbr++;
	}
	if (result == 0)
		is_minus = 1;
	if (is_minus > 0)
		return (base_machine(base_to, result, 0));
	return (base_machine(base_to, result, 1));
}
