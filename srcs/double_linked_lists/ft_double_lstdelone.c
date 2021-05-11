/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstdelone.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:16:45 by llescure          #+#    #+#             */
/*   Updated: 2021/05/11 22:37:12 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_double_lstdelone(t_double_list **lst, int pos)
{
	if (*lst == NULL || pos < 0)
		return ;
	while (*lst->prev != NULL)
		*lst = *lst->prev;
	if (pos == 0)
		case_first_node(lst);
	else if (pos == ft_double_lstsize(lst))
		case_last_node(lst);
}

void	case_first_node(t_double_lst **lst)
{
	t_double_list	*temp;

	temp = *lst;
	*lst = temp->next;;
	temp->next->prev = temp->next;
	free(temp);
}

void	case_last_node(t_double_lst **lst)
{
	t_double_list	*temp;

	while (*lst->next != NULL)
		*lst = *lst->next;
	temp = *lst;
	*lst = temp->prev;
	temp->prev->next = temp->prev;
	free(temp);
}
