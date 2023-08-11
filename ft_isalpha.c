/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:10:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/11 16:05:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks  for  an  alphabetic character; in the standard "C" locale, it is 
// equivalent to (isupper(c) || islower(c)).  In some locales, there may be 
// additional characters forwhich isalpha() is true—letters which are neither 
// uppercase nor lowercase.

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
