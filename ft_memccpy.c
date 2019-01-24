/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:43:17 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:43:18 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*p_dst;
	unsigned char		*p_src;
	unsigned char		u_c;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	u_c = c;
	if (n)
	{
		while (n-- != 0)
		{
			if ((*p_dst++ = *p_src++) == u_c)
				return (p_dst);
		}
	}
	return (0);
}
