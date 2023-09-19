/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:50:03 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 18:14:53 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)buffer;
	while (i < n)
	{
		buf[i] = 0;
		i++;
	}
}
