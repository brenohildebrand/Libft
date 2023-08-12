/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:10:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 18:05:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*src;
	size_t			character;

	index = 0;
	src = (unsigned char *)(s);
	character = (unsigned char)(c);
	while (index < n)
	{
		if (src[index] == character)
			return (&src[index]);
		index++;
	}
	return ((void *)0);
}
