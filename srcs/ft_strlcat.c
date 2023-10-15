/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:12:02 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/05 00:20:21 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	sizedest;
	size_t	i;
	size_t	result;

	if (size == 0)
		return (ft_strlen(src));
	if (size > ft_strlen(dest))
		result = ft_strlen(dest) + ft_strlen(src);
	else
		result = size + ft_strlen(src);
	sizedest = ft_strlen(dest);
	i = 0;
	while (src[i] && sizedest < size - i - 1)
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (result);
}
