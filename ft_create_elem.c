/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:06:03 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/03 17:07:04 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new_item;

	if (!(new_item = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new_item->content = data;
	new_item->next = NULL;
	return (new_item);
}
