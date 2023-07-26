/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:33:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 16:47:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	int	index;

	index = 0;
	if ((char *)dest < (char *)src)
	{
		while (index < n)
		{
			((char *)dest)[index] = ((char *)src)[index];
			index++;
		}
	}
	else
	{
		while (n--)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	return (dest);
}
