/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:45:07 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:45:07 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 > *s2)
			return ((unsigned const char)*s1 - (unsigned const char)*s2);
		else if (*s1 < *s2)
			return ((unsigned const char)*s1 - (unsigned const char)*s2);
		s1++;
		s2++;
	}
	return ((unsigned const char)*s1 - (unsigned const char)*s2);
}
