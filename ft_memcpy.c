/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:55:10 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 16:14:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area 
// dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas
// do overlap.

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		((char *)dest)[index] = ((char *)src)[index];
		index++;
	}
	return (dest);
}
