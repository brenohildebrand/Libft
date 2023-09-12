/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:08:08 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/12 00:29:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_zero(char *base)
{
	char	*string;

	string = ft_calloc(1 + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	string[0] = base[0];
	string[1] = '\0';
	return (string);
}

static size_t	get_string_len(int value, char *base)
{
	long long int	llvalue;
	size_t			base_len;
	size_t			string_len;

	base_len = ft_strlen(base);
	string_len = 0;
	llvalue = value;
	while (llvalue > 0)
	{
		llvalue /= base_len;
		string_len++;
	}
	return (string_len);
}

char	*ft_itoa_base(int value, char *base)
{
	long long int	llvalue;
	char			*string;
	size_t			string_len;
	size_t			base_len;

	if (value == 0)
		return (handle_zero(base));
	base_len = ft_strlen(base);
	string_len = get_string_len(value, base);
	string = ft_calloc(string_len + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	string[string_len] = '\0';
	llvalue = value; 
	while (string_len--)
	{
		string[string_len] = base[llvalue % base_len];
		llvalue /= base_len;
	}
	return (string);
}
