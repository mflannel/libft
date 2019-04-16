/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:32:14 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/16 17:03:24 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lstx;
	t_list *nextlstx;

	lstx = *alst;
	while (lstx)
	{
		nextlstx = lstx->next;
		del((lstx)->content, (lstx)->content_size);
		free(lstx);
		lstx = nextlstx;
	}
	*alst = NULL;
}