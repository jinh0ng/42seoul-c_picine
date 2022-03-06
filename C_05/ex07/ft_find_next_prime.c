/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:28:07 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/19 11:59:40 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	min;
	unsigned int	mid;
	unsigned int	max;

	min = 0;
	max = 46340;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (mid * mid == (unsigned int)nb)
			return (mid);
		else
		{
			if (mid * mid > (unsigned int)nb)
				max = mid - 1;
			else
				min = mid + 1;
		}
	}
	return (mid);
}

int	ft_is_prime(int nb)
{
	int	index;
	int	sqrt;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	index = 2;
	sqrt = ft_sqrt(nb);
	while ((index <= sqrt) && (nb % index != 0))
		index++;
	return (index > sqrt);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
