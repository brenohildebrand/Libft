/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:10:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/11 16:22:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  memchr() function scans the initial n bytes of the memory area pointed 
// to by s for the first instance of c.  Both c and the bytes of the memory area
// pointed to by s are interpreted as unsigned char.

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	index;
	unsigned char	*src;
	unsigned long	character;

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
