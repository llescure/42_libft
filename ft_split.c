/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:24:05 by lea               #+#    #+#             */
/*   Updated: 2020/09/27 19:36:49 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sep(char c, char sep)
{
	if (c = sep)
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
		if (ft_sep(s[i], sep) == 1)
			compt++;
		i++;
	}
}

int		ft_cara(char const *s)
{
	
}

char	**ft_split(char const *s, char c)
{
	
}
