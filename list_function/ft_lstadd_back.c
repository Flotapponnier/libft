/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:07:50 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/22 15:07:52 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_element)
{
	t_list	*current;

	if (!lst || !new_element)
		return ;
	if (*lst == NULL)
	{
		*lst = new_element;
	}
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new_element;
	}
}
