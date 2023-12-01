/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:37:41 by sting             #+#    #+#             */
/*   Updated: 2023/09/28 08:17:09 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		result = result * (nb - i);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%i", ft_iterative_factorial(1));
}
*/
