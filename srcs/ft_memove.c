/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:13:03 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/05 00:16:26 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_ptr, const void *src_ptr, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	if (!src_ptr || !dest_ptr)
		return (NULL);
	dest = (unsigned char *)dest_ptr;
	src = (unsigned char *)src_ptr;
	if (src < dest)
	{
		i = len - 1;
		while ((int)i >= 0)
		{
			dest[i] = src[i];
			i--;
		}
		return (dest_ptr);
	}
	else
		ft_memcpy(dest_ptr, src_ptr, len);
	return (dest_ptr);
}
