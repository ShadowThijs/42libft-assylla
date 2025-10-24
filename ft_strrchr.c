/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:46:46 by asylla            #+#    #+#             */
/*   Updated: 2025/10/24 15:03:13 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char		bb;
	const unsigned char	*ps;
	const unsigned char	*last;

	bb = (unsigned char)c;
	ps = (const unsigned char *)s;
	last = NULL;
	while (*ps)
	{
		if (*ps == bb)
			last = ps;
		ps++;
	}
	if (bb == '\0')
	{
		return ((char *)ps);
	}
	return ((char *)last);
}
