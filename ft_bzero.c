/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:42:48 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/11 16:16:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero() function erases the data in the n bytes of the memory starting at
// the location pointed to by s, by writing zeros (bytes containing '\0') to 
// that area.

#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	ft_memset(s, 0, n);
}
