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

#include <stdlib.h>

static int  get_number_of_tokens(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (1)
    {
        while (s[i] && s[i] == c)
            i++;
        if(s[i] == '\0')
            break ;
        count++;
        while (s[i] && s[i] != c)
            i++;
        if (s[i] == '\0')
            break;
    }
    return (count);
}

#include <stdio.h>

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int     tokens;

    tokens = get_number_of_tokens(s, c);
    
    arr = malloc((tokens + 1) * sizeof(char *));
    if (arr == NULL)
        return (0);
    arr[tokens] = NULL;
    return arr;
}

int main()
{
    ft_split("hello world again", ' ');
}