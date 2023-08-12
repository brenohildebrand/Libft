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

static int	get_number_of_words(char const *s, char c)
{
	int	i;
	int	number_of_words;

	i = 0;
	number_of_words = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		number_of_words++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i] == '\0')
			break ;
	}
	return (number_of_words);
}

static void	get_words_logic(char const *s, char c, char ***words)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	index_of_current_word;

	i = 0;
	index_of_current_word = 0;
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
		(*words)[index_of_current_word] = ft_substr(s, start, end - start + 1);
		index_of_current_word = index_of_current_word + 1;
		if (s[i] == '\0')
			break ;
	}
	(*words)[index_of_current_word] = 0;
}

static char	**get_words(char const *s, char c, int number_of_words)
{
	char	**words;

	words = ft_calloc(number_of_words + 1, sizeof(char *));
	if (words == 0)
		return (0);
	get_words_logic(s, c, &words);
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		number_of_words;

	number_of_words = get_number_of_words(s, c);
	words = get_words(s, c, number_of_words);
	return (words);
}
