/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:50:09 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 20:08:48 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*
t_list *ft_lstnew(void *content) {
    t_list *new_elem;

    new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem)
        return (NULL);
    new_elem->content = content;
    new_elem->next = NULL;
    return (new_elem);
}

void *duplicate_content(void *content) {
    return strdup((char *)content);
}

void del(void *content) {
    free(content);
}

void print_list(t_list *lst) {
    while (lst) {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

void ft_lstclear(t_list **lst, void (*del)(void *)) {
    t_list *tmp;

    while (*lst) {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = tmp;
    }
    *lst = NULL;
}

void ft_lstadd_back(t_list **lst, t_list *new) {
    t_list *temp;

    if (!lst || !new)
        return;
    if (!*lst) {
        *lst = new;
    } else {
        temp = *lst;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
    }
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

/*
int main(void) {
    t_list *list = NULL;
    t_list *new_list = NULL;

    // Creating the original list
    ft_lstadd_back(&list, ft_lstnew(strdup("Element 1")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Element 2")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Element 3")));

    printf("Original list:\n");
    print_list(list);

    // Applying ft_lstmap
    new_list = ft_lstmap(list, &duplicate_content, &del);

    printf("\nMapped list:\n");
    print_list(new_list);

    // Clean up both lists
    ft_lstclear(&list, &del);
    ft_lstclear(&new_list, &del);

    return 0;
}
*/
