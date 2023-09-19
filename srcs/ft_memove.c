/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:13:03 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 14:14:18 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	if (dest == NULL || src == NULL || len == 0)
		return (NULL);
	dest_ptr = dest;
	src_ptr = src;
	i = len - 1;
	if (dest_ptr > src_ptr)
	{
		while (i < len)
		{
			dest_ptr[i] = src_ptr[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
