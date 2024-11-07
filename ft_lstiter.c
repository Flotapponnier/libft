/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:38:57 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 19:28:19 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*
t_list *ft_lstnew(void *content) {
    t_list *new_elem = malloc(sizeof(t_list));
    if (!new_elem)
        return NULL;
    new_elem->content = content;
    new_elem->next = NULL;
    return new_elem;
}

void ft_lstadd_back(t_list **lst, t_list *new) {
    if (!lst || !new)
        return;
    if (*lst == NULL) {
        *lst = new;
    } else {
        t_list *temp = *lst;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
    }
}

void print_content(void *content) {
    printf("%s\n", (char *)content);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void ft_lstclear(t_list **lst, void (*del)(void *)) {
    t_list *temp;
    while (*lst) {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = temp;
    }
}

void del(void *content) {
    free(content);
}

int main(void) {
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(strdup("Bonjour")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("le")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("monde")));
    printf("Contenu de la liste:\n");
    ft_lstiter(lst, print_content);
    ft_lstclear(&lst, del);
    return 0;
}
*/
