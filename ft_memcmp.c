/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:28:49 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 18:05:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*str1;
	unsigned char	*str2;

	index = 0;
	str1 = (unsigned char *)(s1);
	str2 = (unsigned char *)(s2);
	while (index < n)
	{
		if (str1[index] != str2[index])
		{
			return ((int)(str1[index] - str2[index]));
		}
		index++;
	}
	return (0);
}
