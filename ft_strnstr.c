/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:46:44 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:46:45 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len;

	if (*str2 == '\0')
		return ((char *)str1);
	len = ft_strlen(str2);
	while (*str1 != '\0' && n-- >= len)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, len) == 0)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
