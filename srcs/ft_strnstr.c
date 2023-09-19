/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:05:17 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 20:07:14 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		i;

	i = 0;
	if (to_find == NULL || ft_strlen(to_find) == 0)
		return ((char *)str);
	if (ft_strlen(to_find) > n)
		return (NULL);
	while (i < n)
	{
		if (ft_strncmp((char *)&str[i], to_find, ft_strlen(to_find)) == 0)
		{
			if (i + ft_strlen(to_find) > n)
				return (NULL);
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
