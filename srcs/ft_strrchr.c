/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:38:44 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 21:33:56 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*point;
	size_t	end;

	i = 0;
	point = NULL;
	end = ft_strlen(str);
	if (str == NULL)
		return (NULL);
	if ((char)c == '\0')
	{
		point = (char *)&str[end];
		return (point);
	}
	while (str[i])
	{
		if (str[i] == (char)c)
			point = (char *)&str[i];
		i++;
	}
	if (point && *point == (char)c)
		return (point);
	return (NULL);
}
