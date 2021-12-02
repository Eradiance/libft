/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:00:52 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/08 14:00:52 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lascii(int c)
{
	while (c < 0)
		c += 256;
	while (c > 255)
		c -= 256;
	return (c);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*char_ptr;

	c = ft_lascii(c);
	char_ptr = (char *)s;
	while (*char_ptr != '\0')
		char_ptr += 1;
	if (c == '\0')
		return (char_ptr);
	while (char_ptr != s)
	{
		if (*char_ptr == (char)c)
			return (char_ptr);
		char_ptr -= 1;
	}
	if (c == *s)
		return (char_ptr);
	return (0);
}
