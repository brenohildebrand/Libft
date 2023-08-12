/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:22:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/12 18:06:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	char	*ptr;

	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ptr == ((void *)0))
		return (0);
	index = 0;
	while (s[index])
	{
		ptr[index] = s[index];
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
