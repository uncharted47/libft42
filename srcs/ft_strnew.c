/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:09:54 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/28 21:48:25 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;

	if (size == 0)
	{
		newstr = (char *)malloc(sizeof(*newstr) * (1));
		if (newstr)
		{
			ft_memset(newstr, '\0', (1));
			return (newstr);
		}
	}
	else if (size)
	{
		newstr = (char *)malloc(sizeof(*newstr) * (size + 1));
		if (newstr)
		{
			ft_memset(newstr, '\0', (size + 1));
			return (newstr);
		}
	}
	return (NULL);
}
