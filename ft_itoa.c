/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 02:27:21 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/03 02:27:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// number_of_characters - i - 1 is the last index of the string if i == 0
static char	*get_digits(int n, int number_of_characters)
{
	int		i;
	char	*s;
	int		number_of_digits;

	s = ft_calloc(number_of_characters + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	s[number_of_characters] = '\0';
	if (n >= 0)
		number_of_digits = number_of_characters;
	else
	{
		s[0] = '-';
		n *= -1;
		number_of_digits = number_of_characters - 1;
	}
	i = 0;
	while (i < number_of_digits)
	{
		s[number_of_characters - i - 1] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (s);
}

// number_of_characters is initialized to 1 in order to count the last digit
// the while loop does not count
static int	get_number_of_characters(int n)
{
	int	number_of_characters;

	number_of_characters = 1;
	if (n < 0)
	{
		number_of_characters++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		number_of_characters++;
	}
	return (number_of_characters);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		number_of_characters;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number_of_characters = get_number_of_characters(n);
	s = get_digits(n, number_of_characters);
	return (s);
}
