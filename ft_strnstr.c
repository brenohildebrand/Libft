/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:06:58 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 18:06:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_index;
	size_t	little_index;

	if (little[0] == '\0')
		return ((char *)big);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	big_index = 0;
	little_index = 0;
	while (big_index < len)
	{
		if (big[big_index + little_index] == little[little_index])
		{
			while (big_index + little_index < len && little[little_index] != 0 \
					&& big[big_index + little_index] == little[little_index])
				little_index++;
			if (little[little_index] == 0)
				return ((char *)&big[big_index]);
			else
				little_index = 0;
		}
		big_index++;
	}
	return (0);
}
