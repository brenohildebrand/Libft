/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:12:29 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 15:49:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset() function fills the first n bytes of the memory area pointed to 
// by s with the constant byte c.

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = (unsigned char)c;
		index++;
	}
	return (s);
}
