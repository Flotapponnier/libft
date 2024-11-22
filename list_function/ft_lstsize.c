/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:09:26 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/22 15:09:28 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *list)
{
	t_list	*start;
	int		count;

	start = list;
	count = 0;
	while (start)
	{
		count++;
		start = start->next;
	}
	return (count);
}
