/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:21:00 by mariorte          #+#    #+#             */
/*   Updated: 2024/12/13 18:25:46 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Define todas las funciones y estructuras necesarias
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_memset(void *s, int c, size_t n);

#endif