/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:22:48 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/04 21:03:20 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	if (dst != src)
	{
		i = -1;
		src1 = (char *)src;
		dst1 = (char *)dst;
		if (src1 < dst1)
			while (len-- > 0)
				*(dst1 + len) = *(src1 + len);
		else
			while (++i < len)
				*(dst1 + i) = *(src1 + i);
	}
	return (dst);
}
