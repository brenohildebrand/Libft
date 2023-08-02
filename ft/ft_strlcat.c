/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:56:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 17:26:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcat() function appends the NUL-terminated string src to the end of 
// dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating 
// the result.

unsigned int	strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dst_len;

	index = 0;
	dst_len = ft_strlen(dst);
	while (index < (size - dst_len - 1))
	{
		dst[index + dst_len] = src[index];
		index++;
	}
	dst[index + dst_len] = 0;
	return (dst_len + ft_strlen(src));
}
