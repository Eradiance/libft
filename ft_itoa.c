/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 07:01:31 by erainbow          #+#    #+#             */
/*   Updated: 2021/11/12 07:01:31 by erainbow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoalen(int n)
{
	int	len;

	len = 1;
	while ((n > 9) || (n < -9))
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_writeminus(int minus)
{
	if (minus == 1)
		return (-1);
	else if (minus == 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			minus;
	int			i;

	len = ft_itoalen(n);
	minus = (n < 0);
	str = (char *)malloc(minus + len + 1);
	if (!str)
		return (0);
	if (minus)
		str[0] = '-';
	else
		str[0] = '0';
	i = minus + len;
	str[i--] = '\0';
	while (n)
	{
		str[i--] = (char)(ft_writeminus(minus) * (n % 10) + '0');
		n /= 10;
	}
	return (str);
}
