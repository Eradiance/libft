/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:02:40 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/12 08:02:40 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	if (!str1 && !str2)
		return (NULL);
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dst);
}
