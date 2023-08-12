/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:55:03 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 16:32:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (total > 2147483647 || (total / nmemb) != size)
	{
		return ((void *) 0);
	}
	else
	{
		ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
		ft_bzero(ptr, nmemb * size);
		return (ptr);
	}
}
