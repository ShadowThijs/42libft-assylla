/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:54:41 by asylla            #+#    #+#             */
/*   Updated: 2025/10/24 13:15:53 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	remaining_space;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
	{
		return (dst_len + src_len);
	}
	remaining_space = size - dst_len;
	i = 0;
	while (src[i] && (i < remaining_space - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
