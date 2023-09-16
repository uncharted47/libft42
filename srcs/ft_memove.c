/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:13:03 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/16 20:52:34 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;
	size_t		idx;

	dst_ptr = dst;
	src_ptr = src;
	idx = len - 1;
	if (dst_ptr > src_ptr)
	{
		while (idx < len)
		{
			dst_ptr[idx] = src_ptr[idx];
			idx--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
