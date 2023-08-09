/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:42:48 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 15:51:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero() function erases the data in the n bytes of the memory starting at
// the location pointed to by s, by writing zeros (bytes containing '\0') to 
// that area.

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		((char *)s)[index] = (char)0;
		index++;
	}
}
