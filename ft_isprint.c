/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:18:45 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/25 12:39:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for any printable character including space.

int	ft_isprint(int c)
{
	if (c > 0x1f && c < 0x7f)
		return (1);
	return (0);
}
