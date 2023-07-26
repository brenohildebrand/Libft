/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:55:40 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 17:26:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcpy() function copies up to size - 1 characters from the 
// NUL-terminated string src to dst, NUL-terminating the result.

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	return (ft_strlen(src));
}
