/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:05:37 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/18 11:13:54 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	if (*base == '\0')
		return (0);
	while (base[i] != '\0')
	{
		c = base[i];
		if (c == '+' || c == '-' || (c < 32 || c > 126))
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_new_putnbr(int nbr, int baselen, char *base)
{
	if (nbr == -2147483648)
	{
		ft_new_putnbr(nbr / baselen, baselen, base);
		write(1, &(base[-(nbr % baselen)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_new_putnbr(-nbr, baselen, base);
		return ;
	}
	if (nbr > baselen - 1)
		ft_new_putnbr(nbr / baselen, baselen, base);
	write(1, &(base[nbr % baselen]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	baselen = ft_strlen(base);
	if (is_valid_base(base) == 0)
		return ;
	ft_new_putnbr(nbr, baselen, base);
}
