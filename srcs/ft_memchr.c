/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:39:43 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/05 00:50:00 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buff, int c, size_t n)
{
	unsigned char	*mem;
	int				i;

	if (!buff)
		return (NULL);
	mem = (unsigned char *)buff;
	i = 0;
	while (i < (int)n)
	{
		if (mem[i] == (unsigned char)c)
			return ((void *)&mem[i]);
		i++;
	}
	return (NULL);
}
