/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:59:40 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 18:06:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	while (index < n)
	{
		if ((unsigned char)(s1[index]) != (unsigned char)(s2[index]))
		{
			if ((unsigned char)(s1[index]) > (unsigned char)(s2[index]))
				return (1);
			else
				return (-1);
		}
		else
		{
			if ((unsigned char)(s1[index]) == 0 && \
				(unsigned char)(s2[index]) == 0)
				return (0);
			index++;
		}
	}
	return (0);
}
