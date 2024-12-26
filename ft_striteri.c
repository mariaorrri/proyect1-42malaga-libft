/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:00:27 by mariorte          #+#    #+#             */
/*   Updated: 2024/12/26 10:03:29 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = f(i, s[i]);
		i++;
	}
	return (s);
}
