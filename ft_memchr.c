/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:32:40 by asylla            #+#    #+#             */
/*   Updated: 2025/10/24 23:59:41 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;
	unsigned char		target_char;
	size_t				i;

	ch = (const unsigned char *)s;
	target_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ch[i] == target_char)
		{
			return ((void *)(ch + i));
		}
		i++;
	}
	return (NULL);
}
