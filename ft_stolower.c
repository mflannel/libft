/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:39:40 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/03 17:07:04 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

char	*ft_stolower(char *str)
{
	char *strtmp;

	if (!str)
		return (NULL);
	strtmp = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = ft_tolower((int)*str);
		str++;
	}
	return ((char *)strtmp);
}
