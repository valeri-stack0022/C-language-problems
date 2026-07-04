/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:39:02 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/02 17:42:59 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int	div;
	int	mod;
	int	*divp;
	int	*modp;

	div = 1;
	mod = 1;
	divp = &div;
	modp = &mod;	

	ft_div_mod(8,4, divp, modp);
	char c_div = div + '0';
        char c_mod = mod + '0';

	write(1, &c_div ,1);
	write(1, "\n" ,1);
	write(1, &c_mod ,1);


return (0);
}*/
