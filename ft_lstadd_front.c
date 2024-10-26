/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:11:05 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/26 12:11:09 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list{
    
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list  *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;

    return (node);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    
}


int main() {
    // Write C code here
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    int n4 = 4;
    
    t_list *head = ft_lstnew(&n1);
    t_list *temp = head;
    head->next = ft_lstnew(&n2);
    head = head->next;
    head->next = ft_lstnew(&n3);
    head = head->next;
    head->next = ft_lstnew(&n4);
    head = head->next;
    head->next = NULL;
    
    int leet = 1337;
    
    
    
    t_list  *node;
    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return ;
    node->content = &leet;
    node->next = NULL;
    ft_lstadd_front(&temp,node);
    
    
    
    while (temp != NULL)
    {
        printf("-------> %d\n",*(int *)temp->content);
        temp = temp->next;
    }

    

    return 0;
}