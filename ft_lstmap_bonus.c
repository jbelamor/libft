/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 19:10:49 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/18 18:48:52 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	
	if (!lst || !lst->content)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		if (!lst->content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
	}
//	print_list(new_list);
	return (new_list);
}

void *      lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}
/*
int main()
{
	t_list  *l = ft_lstnew(strdup(" 1 2 3 "));
    t_list  *ret;
    l->next = ft_lstnew(strdup("ss"));
    l->next->next = ft_lstnew(strdup("-_-"));
    ret = ft_lstmap(l, lstmap_f, NULL);
	print_list(l);
    if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
		printf("todo ok\n");
	else
		printf("todo mal\n");
}*/
