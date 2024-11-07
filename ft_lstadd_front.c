/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:23:52 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 19:38:28 by ftapponn         ###   ########.fr       */
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



char *ft_strdup(const char *str) {
    char    *cpy;
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    cpy = (char *)malloc(sizeof(char) * (i + 1));
    if (!cpy)
        return (NULL);
    i = 0;
    while (str[i]) {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return cpy;
}

void print_content(void *content) {
    printf("%s\n", (char *)content);
}

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    while (lst) {
        f(lst->content);
        lst = lst->next;
    }
}

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
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int main(void) {
    t_list *lst = NULL;
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("monde")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("le")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Bonjour")));
    printf("Contenu de la liste après ajout en début:\n");
    ft_lstiter(lst, print_content);
    ft_lstclear(&lst, del);

    return 0;
}
*/
