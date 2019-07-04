/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:48:29 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	len;

	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == FT_ULONG_MAX)
		return (NULL);
	if (!(str = ft_memalloc(len + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
