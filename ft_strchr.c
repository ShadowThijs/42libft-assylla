/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:23:36 by asylla            #+#    #+#             */
/*   Updated: 2025/10/18 17:45:41 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	bb;

	bb = (unsigned char )c;
	while (*s)
	{
		if ((unsigned char)*s == bb)
		{
			return ((char *)s);
		}
		s++;
	}
	if (bb == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
