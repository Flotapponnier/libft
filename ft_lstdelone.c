/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:38:38 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 19:50:11 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

void del(void *content)
{
    free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
int main(void) {
    t_list *lst = NULL;
    t_list *second = NULL;

    lst = ft_lstnew(ft_strdup("Bonjour"));
    second = ft_lstnew(ft_strdup("le"));
    lst->next = second;
    printf("Contenu de la liste avant suppression d'un élément:\n");
    ft_lstiter(lst, print_content);
    ft_lstdelone(second, del);
    lst->next = NULL;
    printf("Contenu de la liste après suppression d'un élément:\n");
    ft_lstiter(lst, print_content);
    ft_lstdelone(lst, del);
    return 0;
}
*/
