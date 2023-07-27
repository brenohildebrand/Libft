/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:28:49 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/27 12:40:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcmp() function compares the first n bytes (each interpreted as 
// unsigned char) of the memory areas s1 and s2.

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	index;
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
		else
		{
			if (str1[index] == 0 && str2[index] == 0)
				return (0);
			index++;
		}
	}
	return (0);
}
