/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:56:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 18:06:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;

	if (dst == 0 && src == 0)
		return (0);
	index = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (src[index] && index < (size - dst_len - 1))
	{
		dst[index + dst_len] = src[index];
		index++;
	}
	dst[index + dst_len] = 0;
	return (dst_len + ft_strlen(src));
}
