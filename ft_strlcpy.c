/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:55:40 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/04 22:54:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcpy() function copies up to size - 1 characters from the 
// NUL-terminated string src to dst, NUL-terminating the result.

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	index;

	if (dst == 0 || src == 0)
		return (0);
	if (size > 0)
	{
		index = 0;
		while (index < size - 1 && src[index])
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = 0;
	}
	return (ft_strlen(src));
}
