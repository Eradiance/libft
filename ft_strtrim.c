/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:34:36 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/09 18:34:36 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char ch, char const *set)
{
	char	*ptr;

	ptr = (char *)set;
	while (*ptr)
	{
		if (*ptr == ch)
			return (1);
		ptr++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*ptr;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	ptr = (char *)s1;
	while (*ptr && ft_is_in_set(*ptr, set))
		ptr++;
	if (*ptr == '\0')
	{
		trimmed = (char *)malloc(1);
		*trimmed = 0;
		return (trimmed);
	}
	start = ptr;
	ptr = (char *)(s1 + (unsigned)ft_strlen(s1) - 1);
	while (ptr && ft_is_in_set(*ptr, set))
		ptr--;
	end = ptr;
	trimmed = ft_substr(s1, (unsigned int)(start - s1),
			(unsigned int)(end - start + 1));
	return (trimmed);
}
