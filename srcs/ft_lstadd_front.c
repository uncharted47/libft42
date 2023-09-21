/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:31:56 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/21 21:31:57 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add a 'new_list'-node to the beginning of a list.
void	ft_lstadd_front(t_list **lst, t_list *new_list)
{
	if (lst == NULL || new_list == NULL)
		return ;
	new_list->next = *lst;
	*lst = new_list;
}
