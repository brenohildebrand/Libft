/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:49:34 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/27 11:57:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strrchr() function returns a pointer to the last occurrence of the 
// character c in the string s.

char	*ft_strrchr(const char*s, int c)
{
	int		index;
	char	*last_ocurrence;

	index = 0;
	last_ocurrence = 0;
	while (s[index])
	{
		if (s[index] == (char)(c))
			last_ocurrence = (char *)(s + index);
		index++;
	}
	return (last_ocurrence);
}
