/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:41:56 by llescure          #+#    #+#             */
/*   Updated: 2020/12/21 21:53:22 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list *my_list;
	t_list *new;
	t_list *new2;
	t_list *new3;
	t_list *last;

	my_list = ft_lstnew((void *)8);
	new = ft_lstnew((void *)10);
	new2 = ft_lstnew((void *)14);
	new3 = ft_lstnew((void *)6);
	ft_lstadd_front(&my_list, new);
	ft_lstadd_front(&my_list, new2);
	ft_lstadd_back(&my_list, new3);
	last = ft_lstlast(my_list);
	while (my_list != 0)
	{
		printf("%i\n", (int)my_list->content);
		my_list = my_list->next;
	}
	while (last != 0)
	{
		printf("last%i\n", (int)last->content);
		last = last->next;
	}
}
