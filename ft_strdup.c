/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:22:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/04 22:07:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

// The strdup() function returns a pointer to a new string which is a duplicate
// of the string s.  Memory for the new string is obtained with malloc(3), and
// can be freed with free(3).

char	*ft_strdup(const char *s)
{
	int		index;
	char	*ptr;

	if (s == 0)
		return (0);
	index = 0;
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[index])
	{
		ptr[index] = s[index];
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
