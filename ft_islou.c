/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islou.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:42:39 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/03 17:07:04 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_islou(const char c)
{
	char tmp;

	if (!c)
		return ;
	tmp = c;
	if (tmp >= 65 && tmp <= 90)
		ft_putstr("Lower case\n");
	else if (tmp >= 97 && tmp <= 122)
		ft_putstr("Upper case\n");
	else
		ft_putstr("Not a letter\n");
}
