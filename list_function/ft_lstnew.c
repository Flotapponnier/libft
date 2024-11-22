/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:09:15 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/22 15:09:17 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*add;

	add = (t_list *)malloc(sizeof(t_list));
	if (!add)
		return (NULL);
	add->content = content;
	add->next = NULL;
	return (add);
}
