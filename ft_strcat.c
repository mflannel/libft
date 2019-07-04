/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 00:38:21 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t len;
	size_t len2;

	len = 0;
	len2 = 0;
	while (s1[len])
	{
		len++;
	}
	while (s2[len2])
	{
		s1[len + len2] = s2[len2];
		len2++;
	}
	s1[len + len2] = '\0';
	return (s1);
}
