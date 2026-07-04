/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:31:30 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/08 15:22:43 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] <= 'Z' && str[i] >= 'A')
				|| (str[i] <= 'z' && str[i] >= 'a')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	if (ft_str_is_alpha(""))
	{
		write(1, "Correct", 7);
	}
	else
	{
		write(1, "NoCorrect", 9);
	}
	return 0;
}*/
