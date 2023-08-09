/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:10:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/24 18:40:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks  for  an  alphabetic character; in the standard "C" locale, it is 
// equivalent to (isupper(c) || islower(c)).  In some locales, there may be 
// additional characters forwhich isalpha() is true—letters which are neither 
// uppercase nor lowercase.

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
