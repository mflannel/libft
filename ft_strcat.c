/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nick <nick@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 00:38:21 by nick              #+#    #+#             */
/*   Updated: 2019/04/13 18:09:01 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len;
	int len2;

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
