/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:10:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/27 12:24:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  memchr() function scans the initial n bytes of the memory area pointed 
// to by s for the first instance of c.  Both c and the bytes of the memory area
// pointed to by s are interpreted as unsigned char.

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	index;
	unsigned char	*src;
	unsigned char	character;

	index = 0;
	src = (unsigned char *)(s);
	character = (unsigned char)(c);
	while (index < n)
	{
		if (src[index] == character)
			return (&src[index]);
		index++;
	}
	return (0);
}
