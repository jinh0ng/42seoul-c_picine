/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:18:21 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/18 11:19:59 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	min;
	int	mid;
	int	max;

	min = 0;
	max = 46340;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (mid * mid == nb)
			return (mid);
		else
		{
			if (mid * mid > nb)
				max = mid - 1;
			else
				min = mid + 1;
		}
	}
	return (0);
}
