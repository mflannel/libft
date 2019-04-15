/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:35:46 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/13 18:09:01 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t len2;

	len = 0;
	len2 = 0;
	while (*s1)
	{
		len++;
		s1++;
	}
	while ((s2[len2]))
		++len2;
	if (n <= len)
		len2 += n;
	else
		len2 += len;
	while (*s2 && len + 1 < n)
	{
		*s1++ = *s2++;
		len++;
	}
	*s1 = '\0';
	return (len2);
}
