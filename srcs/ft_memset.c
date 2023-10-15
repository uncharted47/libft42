/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:06:31 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/04 23:55:39 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*str;
	size_t			i;

	if (pointer == NULL)
		return (NULL);
	str = (unsigned char *)pointer;
	i = 0;
	while (i < count)
		str[i++] = (unsigned char)value;
	return (pointer);
}
