/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 07:15:36 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/12 07:15:36 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (s && f)
	{
		str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
		if (str)
		{
			i = 0;
			while (s[i] != '\0')
			{
				str[i] = (*f)(i, s[i]);
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
