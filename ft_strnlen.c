/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:46:35 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:46:35 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *str, size_t maxlen)
{
	unsigned len;

	len = 0;
	while (len < maxlen && *str)
	{
		++len;
		++str;
	}
	return (len);
}
