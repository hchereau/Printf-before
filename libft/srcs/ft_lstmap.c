/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:29:12 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 23:40:24 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*transi;

	lstmap = NULL;
	while (lst != NULL)
	{
		transi = ft_lstnew(f(lst->content));
		if (transi == NULL)
			return (ft_lstclear(&lstmap, del), NULL);
		lst = lst->next;
		ft_lstadd_back(&lstmap, transi);
	}
	return (lstmap);
}
