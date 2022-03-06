/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.f>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:07:28 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/22 17:12:08 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char str, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	ft_wordlen(char *charset, char *str)
{
	int	i;

	i = 0;
	while (!ft_is_charset(str[i], charset) && str[i] != '\0')
		i++;
	return (i);
}

int	ft_word(char *charset, char *str)
{
	int		i;
	int		check;
	int		word_len;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_is_charset(str[i], charset) || i == 0)
		{
			check = i;
			if (i != 0 || ft_is_charset(str[i], charset))
				check++;
			word_len = ft_wordlen(charset, &str[check]);
			if (word_len > 0)
				count++;
		}
		i++;
	}
	return (count);
}

int	ft_wordcopy(char *charset, char **strs, char *str, int position)
{
	int		word_len;
	char	*str1;
	int		i;

	word_len = ft_wordlen(charset, str);
	if (word_len > 0)
	{
		strs[position] = (char *)malloc(sizeof(char) * (word_len + 1));
		str1 = strs[position];
		i = 0;
		while (i < word_len)
		{
			str1[i] = str[i];
			i++;
		}
		str1[i] = '\0';
		position++;
	}
	return (position);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		check;
	int		position;
	char	**strs;

	position = 0;
	i = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_word(charset, str) + 1));
	while (str[i] != '\0')
	{
		if (ft_is_charset(str[i], charset) || i == 0)
		{
			check = i;
			if (i != 0 || ft_is_charset(str[i], charset))
				check++;
			position = ft_wordcopy(charset, strs, &str[check], position);
		}
		i++;
	}
	strs[position] = 0;
	return (strs);
}
