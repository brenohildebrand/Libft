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
#include <stdio.h>
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

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int     tokens;
    unsigned int    i;
    unsigned int    start;
    unsigned int    end;
    unsigned int    count;

    tokens = get_number_of_tokens(s, c);
    arr = malloc((tokens + 1) * sizeof(char *));
    if (arr == NULL)
        return (0);
    count = 0;
    i = 0;
    while (1)
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        end = i - 1;

        printf("count: %u\tstart: %u\tend: %u\n", count, start, end);
        arr[count] = malloc(((end - start + 1) + 1) * sizeof(char));
        printf("allocated!\n");
        unsigned int k = 0;
        while (k < end - start + 1)
        {
            printf("storing %c\n", s[start + k]);
            arr[count][k] = s[start + k];
            k++;
        }
        arr[count][end - start + 1] = '\0';
        count++;
        if (s[i] == '\0')
            break;
    }
    arr[tokens] = NULL;
    return (arr);
}

int main()
{
    int     i;
    int     j;
    char    **arr;

    arr = ft_split("hello world again", ' ');
    i = 0;
    while (arr[i])
    {
        j = 0;
        while(arr[i][j])
        {
            write(1, &arr[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}