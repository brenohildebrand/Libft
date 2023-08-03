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

#include <stdlib.h>

static void get_string_from_number(int n, char **s, int len)
{
	int	i;
    
    i = 0;
    if (n < 0)
    {
        (*s)[0] = '-';
		n *= -1;
        while (i < len - 1)
        {
            (*s)[len - i - 1] = (n % 10) + '0';
            n /= 10;
            i++;
        }
    }
    else
    {
        while (i < len)
        {
            (*s)[len - i - 1] = (n % 10) + '0';
            n /= 10;
            i++;
        }
    }
    (*s)[len] = '\0';
}

static int  get_number_of_digits_of_int(int n)
{
    int count;

    count = 1;
    if (n < 0)
    {
        count++;
        n *= -1;
    }
    while (n >= 10)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char            *s;

    s = (char *)malloc((get_number_of_digits_of_int(n) + 1) * sizeof(char));
    if (s == NULL)
        return (NULL);
    get_string_from_number(n, &s, get_number_of_digits_of_int(n));
    return (s);
}