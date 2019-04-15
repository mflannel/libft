/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:59:39 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/13 18:09:01 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strr;
	int		i;
	int		j;

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
