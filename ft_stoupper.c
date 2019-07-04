/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:39:40 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/03 17:07:04 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_stoupper(char *str)
{
	char *strtmp;

	if (!str)
		return (NULL);
	strtmp = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = ft_toupper((int)*str);
		str++;
	}
	return ((char *)strtmp);
}
