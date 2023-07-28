/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:55:03 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/28 15:14:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	if (nmemb * size > 2147483647)
		return (0);
	else
	{
		ptr = malloc(nmemb * size);
		ft_bzero(ptr, nmemb * size);
		return (ptr);
	}
}
