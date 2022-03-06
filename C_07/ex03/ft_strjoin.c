/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:59:28 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/24 17:44:57 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

int	ft_big_strlen(int size, char **strs, int sep_len)
{
	int	biglen;
	int	i;

	i = 0;
	biglen = 0;
	while (i < size)
	{
		biglen += ft_strlen(strs[i]);
		biglen += sep_len;
		i++;
	}
	biglen -= sep_len;
	return (biglen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*head;
	int		i;
	int		biglen;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	biglen = ft_big_strlen(size, strs, ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (biglen + 1));
	if (!str)
		return (NULL);
	head = str;
	i = 0;
	while (i < size)
	{
		ft_strcpy(head, strs[i]);
		head += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(head, sep);
			head += ft_strlen(sep);
		}
	}
	*head = '\0';
	return (str);
}
