/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:05:41 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/12 19:25:10 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*c1;
	size_t	i;

	i = 0;
	c1 = s1;
	while (i < n)
	{
		*(c1 + i) = *((unsigned char *)s2 + i);
		if (*((unsigned char *)s2 + i) == (unsigned char)c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
