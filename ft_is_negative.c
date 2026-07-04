/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:41:55 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/01 14:58:13 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	first;
	char	second;

	first = 'N';
	second = 'P';
	if (n < 0)
	{
		write (1, &first, 1);
	}
	else
	{
		write (1, &second, 1);
	}
}
/*int main()
{
	ft_is_negative(42);
	return (0);
}*/
