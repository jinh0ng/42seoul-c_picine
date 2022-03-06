/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:47:20 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/10 19:14:59 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		n;
	int		k;
	char	c;

	i = 0;
	n = 1;
	k = 'a' - 'A';
	while (str[i] != '\0')
	{
		c = str[i];
		if (n == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= k;
		else if (n == 0 && c >= 'A' && c <= 'Z')
			str[i] += k;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			n = 1;
		else
			n = 0;
		i++;
	}
	return (str);
}
