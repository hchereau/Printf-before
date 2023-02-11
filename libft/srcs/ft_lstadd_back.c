/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:30:23 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 22:05:26 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			curr = *lst;
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = new;
		}
		else
			*lst = new;
	}
}
