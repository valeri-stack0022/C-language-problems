/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:19:36 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/08 15:26:03 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	if(ft_str_is_lowercase(""))
	{
		write(1, "Correct", 7);
	}
	else
	{
		write(1, "NoCorrect", 9);
	}
	return (0);
}*/
