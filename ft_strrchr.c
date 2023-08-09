/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:49:34 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/04 22:58:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strrchr() function returns a pointer to the last occurrence of the 
// character c in the string s.

char	*ft_strrchr(const char*s, int c)
{
	int		index;
	char	*last_ocurrence;

	if (s == 0)
		return (0);
	index = 0;
	last_ocurrence = 0;
	while (s[index])
	{
		if (s[index] == (char)(c))
			last_ocurrence = (char *)(s + index);
		index++;
	}
	if (c == '\0')
		return ((char *)(s + index));
	return (last_ocurrence);
}
