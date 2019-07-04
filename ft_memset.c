/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:50:31 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *now;

	now = NULL;
	if (len == 0)
		return (b);
	now = (unsigned char *)b;
	while (len != 0)
	{
		*now = (unsigned char)c;
		if (len)
		{
			now++;
			len--;
		}
	}
	return (b);
}
