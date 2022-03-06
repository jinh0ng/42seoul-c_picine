/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:01:45 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/24 20:06:13 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	b;
	int	i;
	int	*str;

	i = 0;
	if (min >= max)
		return (0);
	b = max - min;
	str = malloc(sizeof(int) * b);
	if (str == NULL)
		return (0);
	while (min < max)
	{
		str[i++] = min++;
	}
	return (str);
}
