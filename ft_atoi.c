/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:24:52 by lea               #+#    #+#             */
/*   Updated: 2020/09/25 16:16:50 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_check_sign(const char *str)
{
	int sign;
	int i;

	sign = 1;
	i = 0;
	while (str[i] == '-' || str[i] == '+' || ft_is_white_space(str[i]) == 1)
	{
		if (str[i] == '-')
		{
			if (str[i + 1] == '+' || sign == -1 ||
				ft_is_white_space(str[i + 1]) == 1)
				return (0);
			sign = sign * -1;
		}
		if (str[i] == '+')
		{
			if (sign == -1 || str[i + 1] == '+' ||
				ft_is_white_space(str[i + 1]) == 1)
				return (0);
		}
		i++;
	}
	return (sign);
}

int		ft_atoi(const char *str)
{
	int i;
	int rslt;
	int sign;

	i = 0;
	rslt = 0;
	while (str[i] == '-' || str[i] == '+' || ft_is_white_space(str[i]) == 1 ||
			(str[i] >= '0' && str[i] <= '9'))
	{
		sign = ft_check_sign(str);
		if (sign == 0)
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
		{
			rslt = rslt * 10 + str[i] - '0';
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (sign * rslt);
		}
		i++;
	}
	return (sign * rslt);
}
