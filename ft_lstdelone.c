/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:39:31 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:39:32 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*p;

	p = *alst;
	if (p == NULL || alst == NULL)
		return ;
	p->next = NULL;
	if (del != NULL)
		del(p->content, p->content_size);
	free(p);
	*alst = NULL;
}
