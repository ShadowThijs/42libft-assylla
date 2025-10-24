/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:47:26 by asylla            #+#    #+#             */
/*   Updated: 2025/10/22 17:29:30 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*final_str;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	final_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (final_str == NULL)
	{
		return (NULL);
	}
	ft_memcpy(final_str, s1, s1_len);
	ft_memcpy(final_str + s1_len, s2, s2_len);
	final_str[s1_len + s2_len] = '\0';
	return (final_str);
}
