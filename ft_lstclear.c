/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:38:19 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 19:44:15 by ftapponn         ###   ########.fr       */
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

void del(void *content) {
    free(content);
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
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

/*
int main(void)
{
    t_list *lst = NULL;
    lst = ft_lstnew(ft_strdup("Bonjour"));
    lst->next = ft_lstnew(ft_strdup("le"));
    lst->next->next = ft_lstnew(ft_strdup("monde"));
    printf("Contenu de la liste avant le nettoyage:\n");
    ft_lstiter(lst, print_content);
    ft_lstclear(&lst, del);
    if (lst == NULL)
        printf("La liste a été correctement nettoyée et est vide.\n");
    return (0);
}
*/
