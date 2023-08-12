/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:33:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 15:25:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned long	index;

	if (dest == ((void *)0) && src == ((void *)0))
		return ((void *)0);
	index = 0;
	if (dest < src)
	{
		while (index < n)
		{
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	else
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}
