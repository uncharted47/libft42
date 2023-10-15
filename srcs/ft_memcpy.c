/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:06:23 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/05 16:02:19 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst_ptr, const void *src_ptr, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src;

	if (!src_ptr && !dst_ptr)
		return (NULL);
	i = 0;
	dst = (char *)dst_ptr;
	src = (const char *)src_ptr;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
