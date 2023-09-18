/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:39:27 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/18 23:46:39 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	if (str[i] == '\0' || str == NULL)
	{
		return (NULL);
	}
	size = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (size +1));
	if (!dup)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
