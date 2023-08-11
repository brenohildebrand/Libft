/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:55:10 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/11 16:40:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area 
// dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas
// do overlap.

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned long	index;

	index = 0;
	if (dest == (void *)0 && src == (void *)0)
		return ((void *)0);
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dest);
}
