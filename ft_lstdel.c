/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:39:27 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:39:27 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del) (void*, size_t))
{
	if (*alst == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	ft_lstdel(&((*alst)->next), del);
	free(*alst);
	*alst = NULL;
}
