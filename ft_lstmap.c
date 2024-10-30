/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:34:14 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/28 20:34:17 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_node;
    t_list *head;
    t_list *firs_new_node;

    if (!lst || !del || !f)
        return (NULL);
    head = lst;
    firs_new_node = ft_lstnew((*f)(head->content));
    if (!firs_new_node)
        return (NULL);
    head = head->next;
    new_node = firs_new_node;
    while (head != NULL)
    {
        new_node->next = ft_lstnew((*f)(head->content));
        if (!new_node->next)
        {
            new_node->next = NULL;
            ft_lstclear(&firs_new_node,del);
            return NULL;
        }
        new_node = new_node->next;
        head = head->next;
    }
    new_node->next = NULL;
    return (firs_new_node);
}
