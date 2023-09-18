/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:06:31 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/18 23:59:21 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *pointer, int value, size_t count)
{
	unsigned char	*c;

	c = (unsigned char)pointer;
	while (count--)
	{
		c = 0;
	}
	return (pointer);
}
