/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:38:44 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 18:55:03 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*point;

	i = 0;
	if (str == NULL)
		return (NULL);
	if ((char)c == '\0')
	{
		point = (char *)&str[ft_strlen(str)];
		return (point);
	}
	while (str[i])
	{
		if (str[i] == (char)c)
			point = (char *)&str[i];
		i++;
	}
	if (point[0] == (char)c)
		return (point);
	return (NULL);
}
