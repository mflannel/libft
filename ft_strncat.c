/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:20:09 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	len2;

	len = 0;
	len2 = 0;
	i = 0;
	while (s1[len])
		len++;
	while ((s2[len2]) && (i < n))
	{
		s1[len + len2] = s2[len2];
		len2++;
		i++;
	}
	s1[len + len2] = '\0';
	return (s1);
}
