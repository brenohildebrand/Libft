/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:29:31 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/12 15:39:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	index;
	int	signal;
	int	nb;

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
	return (nb * signal);
}
