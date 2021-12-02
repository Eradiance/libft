/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:06:40 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/12 08:06:40 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;

	src1 = (char *)src;
	dst1 = (char *)dst;
	if (src1 < dst1)
		while (len--)
			dst1[len] = src1[len];
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}
