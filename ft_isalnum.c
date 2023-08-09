/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:14:01 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/25 11:39:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for an alphanumeric character; it is equivalent to (isalpha(c) || 
// isdigit(c)).

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
