/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:26:10 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/02 21:26:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdlib.h>

static int	get_number_of_tokens(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i] == '\0')
			break ;
	}
	return (count);
}

static void	get_tokens_logic(char const *s, char c, char ***tokens)
{
	unsigned long	i;
	unsigned long	count;
	unsigned long	start;
	unsigned long	end;

	i = 0;
	count = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i - 1;
		(*tokens)[count++] = ft_substr(s, start, end - start + 1);
		if (s[i] == '\0')
			break ;
	}
	(*tokens)[count] = 0;
}

static char	**get_tokens(char const *s, char c, int number_of_tokens)
{
	char	**tokens;

	tokens = ft_calloc(number_of_tokens + 1, sizeof(char *));
	if (tokens == 0)
		return (0);
	get_tokens_logic(s, c, &tokens);
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	return (get_tokens(s, c, get_number_of_tokens(s, c)));
}
