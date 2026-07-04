/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:37:15 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/08 16:57:30 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'Z' && str[i] >= 'A'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main()
{
	printf("%d", ft_str_is_uppercase("ABDcde"));

	return (0);
}*/
