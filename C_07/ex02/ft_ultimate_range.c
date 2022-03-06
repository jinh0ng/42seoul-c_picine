/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:34:35 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/24 20:07:15 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	b;
	int	i;
	int	*str;

	if (min >= max)
		return (0);
	b = max - min;
	str = malloc(sizeof(int) * b);
	if (str == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = str;
	i = 0;
	while (min <= max)
		str[i++] = min++;
	return (b);
}
