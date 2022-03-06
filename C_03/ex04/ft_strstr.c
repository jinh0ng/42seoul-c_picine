/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:15:11 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/13 11:16:12 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
