/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:14:59 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 17:49:34 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	size_t			size;
	unsigned int	j;

	size = ft_strlen((char *)dest);
	j = 0;
	if (!dest || !src)
		return (dest);
	while (src[j] && j < n)
	{
		dest[size + j] = src[j];
		j++;
	}
	dest[size + j] = '\0';
	return (dest);
}
