/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:20:35 by llescure          #+#    #+#             */
/*   Updated: 2020/10/30 17:51:46 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *s, char sep)
{
	int i;
	int compt;

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

int		ft_cara(char const *s, char sep, int pos)
{
	int i;
	int compt;

	i = pos;
	compt = 0;
	while (s[i] == sep)
		i++;
	while (s[i] != sep && s[i] != '\0')
	{
		compt++;
		i++;
	}
	return (compt);
}

char	**ft_split(char const *s, char c)
{
	char						**tab;
	int							i;
	int							j;
	int							pos;

	i = 0;
	pos = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (i < ft_count(s, c))
	{
		j = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (ft_cara(s, c, pos) + 1))))
			return (NULL);
		while (s[pos] == c)
			pos++;
		while (s[pos] != c && s[pos] != '\0')
		{
			tab[i][j] = s[pos];
			pos++;
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int		main(void)
{
	char test[] = "                 Coucou les          petits potes            ";
	char sep = ' ';
	char **print;
	int i;

	i = 0;
	printf("%i\n", ft_count(test, sep));
	printf("%i\n", ft_cara(test, sep, 0));
	print = ft_split(test, sep);
	while (i <= ft_count(test, sep))
	{
		printf("dans main %d %s\n", i, print[i]);
		i++;
	}
}
