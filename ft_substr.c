/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:09:39 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/09 17:09:39 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	if (len <= (unsigned int)ft_strlen(s))
		str = ft_calloc(len + 1, sizeof(char));
	else
		str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (s + start), len + 1);
	return (str);
}
