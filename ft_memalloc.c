/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:42:57 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:42:58 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *pointer;

	if ((pointer = malloc(size)))
	{
		ft_bzero(pointer, size);
		return (pointer);
	}
	else
		return (NULL);
}
