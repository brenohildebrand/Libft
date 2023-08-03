/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:53:45 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/03 11:53:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int  is_character_in_the_set(char c, char const *set)
{
    int i;
    
    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

static int  get_last_character_different_from_set(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    len;

    i = 0;
    len = ft_strlen(s1);
    while (1)
    {
        if (is_character_in_the_set(s1[len - i - 1], set))
            i++;
        else
            return (i);
    }
    return (0);
}

static unsigned int    get_first_character_different_from_set(\
                char const *s1, \
                char const *set )
{
    unsigned int    i;

    i = 0;
    while (1)
    {
        if (is_character_in_the_set(s1[i], set))
            i++;
        else
            return (i);
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char            *s;
    unsigned int    start;
    unsigned int    end;

    if (s1 == NULL || set == NULL)
        return (NULL);
    start = get_first_character_different_from_set(s1, set);
    end = get_last_character_different_from_set(s1, set);
    s = malloc(((end - start + 1) + 1) * sizeof(char));
    ft_memcpy(s, s1, end - start + 1);
    s[(end - start + 1) + 1] = '\0';
    return (s);
}
