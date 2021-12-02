/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:53:52 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/12 18:53:52 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*counter;

	counter = (unsigned char *)arr;
	while (n--)
	{
		if (*counter != (unsigned char)c)
			counter++;
		else
			return (counter);
	}
	return (NULL);
}
