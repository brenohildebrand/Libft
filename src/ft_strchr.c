/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:30:21 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/27 11:48:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() function returns a pointer to the first occurrence of the 
// character c in the string s.

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index++;
	}
	return (0);
}
