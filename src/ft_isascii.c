/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:55:31 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/25 12:04:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks whether c is a 7-bit unsigned char value that fits into the ASCII 
// character set.

int	ft_isascii(int c)
{
	if (c >= 0x00 && c <= 0x7f)
		return (1);
	return (0);
}
