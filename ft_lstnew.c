/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <mflannel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:42:39 by mflannel          #+#    #+#             */
/*   Updated: 2019/04/16 14:46:04 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if(!(new->content = (void *)malloc(content_size)))
				return (NULL);
		new->content = ft_memcpy((new->content), content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}