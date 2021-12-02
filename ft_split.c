/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:01:19 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/10 00:01:19 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int		i;
	int		words;
	int		word;

	i = 0;
	words = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			word = 0;
		if ((word == 0) && (s[i] != c))
		{
			word = 1;
			words++;
		}
		i++;
	}
	return (words);
}

static int	ft_strsplitlen(char const *s, char c)
{
	int		i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**finish;

	i = 0;
	if (s && *s)
		words = ft_countwords(s, c);
	else
		words = 0;
	finish = (char **)malloc((words + 1) * sizeof(char *));
	if (finish == NULL)
		return (NULL);
	while (words--)
	{
		while ((*s == c) && (*s != '\0'))
			s++;
		finish[i] = ft_substr(s, 0, ft_strsplitlen(s, c));
		if (finish[i] == NULL)
			return (NULL);
		s = s + ft_strsplitlen(s, c);
		i++;
	}
	finish[i] = NULL;
	return (finish);
}
