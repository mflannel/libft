/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:42:39 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/15 14:20:36 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			sign;
	long long	result;

	result = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (ft_isdigit((int)*str))
	{
		if (result != ((result * 10 + (int)(*str - '0')) / 10))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		result = result * 10 + (int)(*str++ - '0');
	}
	return ((int)result * sign);
}
