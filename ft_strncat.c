/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:46:11 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:46:12 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr;

	ptr = s1;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*ptr = *s2;
		ptr++;
		s2++;
		n--;
	}
	*ptr = '\0';
	return (s1);
}
