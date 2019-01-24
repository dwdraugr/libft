/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwdraugr <dwdraugr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:45:23 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/12/05 11:45:23 by dwdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*temp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		temp[i] = s1[i];
		i++;
	}
	temp[len] = '\0';
	return (temp);
}
