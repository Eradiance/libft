/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:49:19 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/09 16:49:19 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	i;

	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	i = 0;
	if (!str2)
		return (NULL);
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
