/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:32:14 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/16 17:52:16 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *xlst;

	if (!lst || !f)
		return ;
	xlst = lst;
	while (xlst)
	{
		f(xlst);
		xlst = xlst->next;
	}
}
