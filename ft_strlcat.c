/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:56:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/11 17:12:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcat() function appends the NUL-terminated string src to the end of 
// dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating 
// the result.

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size)
{
	unsigned long	index;
	unsigned long	dst_len;

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
