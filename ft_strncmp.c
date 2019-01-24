/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:46:15 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:46:16 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ultra_return(const char *s1, const char *s2)
{
	return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- != 0)
	{
		if (*s1 != *s2++)
		{
			return (ultra_return(s1, s2));
		}
		if (*s1++ == 0)
			break ;
	}
	return (0);
}
