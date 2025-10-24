/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:48:53 by asylla            #+#    #+#             */
/*   Updated: 2025/10/24 16:49:21 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_bytes;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	total_bytes = nmemb * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_bytes);
	return (ptr);
}
