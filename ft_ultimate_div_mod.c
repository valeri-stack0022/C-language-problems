/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:48:12 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/02 19:22:20 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*int main()
{
	char	p1;
	char	p2;
	int	number1;
	int	number2;

	number1 = 8;
	number2 = 4;
       ft_ultimate_div_mod(&number1, &number2);
       p1 = number1 + '0';
       p2 = number2 + '0';
	write(1, &p1 ,1);
 	write(1, &p2 ,1);
return (0);	
}*/
