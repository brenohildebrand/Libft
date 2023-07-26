/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:16:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/26 17:33:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *s);
void			*ft_memset(void *s, int c, unsigned int n);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int	strlcat(char *dst, const char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
