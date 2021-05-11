/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstadd_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:04:32 by llescure          #+#    #+#             */
/*   Updated: 2021/05/11 12:04:42 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_double_lstadd_back(t_double_list **alst, t_double_list *new)
{
	if (alst == NULL)
		return ;
	new->next = NULL;
	if (*alst == NULL)
	{
		new->previous = NULL;
		*alst = new;
		return ;
	}
	while (*alst->next != NULL)
		*alst = *alst->next;
	new->previous = *alst;
	*alst->next = new;
}
