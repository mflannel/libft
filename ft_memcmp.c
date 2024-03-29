/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:05:00 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char				*str1;
	char				*str2;
	unsigned char		c1;
	unsigned char		c2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (n--)
	{
		c1 = (unsigned char)*str1++;
		c2 = (unsigned char)*str2++;
		if (c1 != c2)
			return (c1 - c2);
	}
	return (0);
}
