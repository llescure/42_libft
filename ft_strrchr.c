/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 10:33:31 by lea               #+#    #+#             */
/*   Updated: 2020/09/09 13:29:21 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str);

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int compt;

	compt = 0;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
			compt = i;
		i++;
	}
	if (compt == 0)
		return (0);
	return ((char *)&str[compt]);
}

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
