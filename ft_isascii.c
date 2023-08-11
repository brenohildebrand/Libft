/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:55:31 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/11 16:06:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks whether c is a 7-bit unsigned char value that fits into the ASCII 
// character set.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
