/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:25:53 by llescure          #+#    #+#             */
/*   Updated: 2020/12/21 21:53:54 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long		ft_count_words2(char const *s, char sep)
{
	unsigned long	i;
	unsigned long	compt;

	i = 0;
	compt = 0;
	while (s[i] != '\0')
	{
		if (s[i] != sep && (s[i + 1] == sep || (s[i + 1] == '\0')))
			compt++;
		if (s[i + 1] == '\0')
			break ;
		i++;
	}
	return (compt);
}

int main(void)
{
	char	*string = "      split       this for   me  !       ";
	unsigned long i;
	char **rslt;

	i = 0;
	rslt = ft_split(string, ' ');
	while (i < ft_count_words2(string, ' '))
	{
		printf("%s\n", rslt[i]);
		i++;
	}
}
