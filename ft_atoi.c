/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:29:31 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/02 17:47:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (\
		c == '\f' || \
		c == '\n' || \
		c == '\r' || \
		c == '\t' || \
		c == '\v' || \
		c == ' '\
	)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int				index;
	int				signal;
	long long int	nb;

	index = 0;
	while (ft_isspace(nptr[index]))
		index++;
	signal = 1;
	if (nptr[index] == '-')
		signal = -1;
	if (nptr[index] == '-' || nptr[index] == '+')
		index++;
	nb = 0;
	while (ft_isdigit(nptr[index]))
	{
		nb *= 10;
		nb += nptr[index] - '0';
		index++;
	}
	return ((int)(nb * signal));
}
