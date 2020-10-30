/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:20:35 by llescure          #+#    #+#             */
/*   Updated: 2020/10/30 16:45:17 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int		ft_count(char const *s, char sep)
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	while (s[i] != '\0')
	{
		if (ft_sep(s[i], sep) == 0 && (ft_sep(s[i + 1], sep) == 1 ||
			s[i + 1] == '\0'))
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
	compt = 1;
	while (s[i] != '\0')
	{
		while (ft_sep(s[i], sep) == 0 && s[i] != '\0')
		{
			if (ft_sep(s[i + 1], sep) == 1 || s[i + 1] == '\0')
				return (compt);
			compt++;
			i++;
		}
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
		while (s[pos] != '\0')
		{
			while (ft_sep(s[pos], c) == 0 && s[pos] != '\0')
			{
				tab[i][j] = s[pos];
				pos++;
				j++;
			}
			if (j == ft_cara(s, c, pos - j))
			{
				pos++;
				break ;
			}
			pos++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int		main(void)
{
	char test[] = "                 allo      kikou Coucou les petits potes";
	char test-1 = ' ';
	char **print;
	int i;

	i = -2;
	print = ft_split(test, test-1);
	printf("nbre mots %i\n", ft_count(test, test-1));
	while (i <= ft_count(test, test-1))
	{
		printf("dans main %d %s\n", i, print[i]);
		i++;
	}
}
