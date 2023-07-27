/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:59:40 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/27 12:07:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strcmp() function compares the two strings s1 and s2.  The locale is not
// taken into account (for a locale-aware comparison, see strcoll(3)).  It 
// returns an integer less than, equal to, or greater than zero if s1 is found,
// respectively, to be less than, to match, or be greater than s2.

// The strncmp() function is similar, except it compares only the first 
// (at most) n bytes of s1 and s2.

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] > s2[index])
				return (1);
			else
				return (-1);
		}
		else
		{
			if (s1[index] == 0 && s2[index] == 0)
				return (0);
			index++;
		}
	}
	return (0);
}
