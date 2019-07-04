/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:59:39 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strr;
	size_t	i;
	size_t	j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		if (!(strr = ft_memalloc(j + 1)))
			return (NULL);
		while (s[i])
		{
			strr[i] = f(i, s[i]);
			i++;
		}
		return (strr);
	}
	return (NULL);
}
