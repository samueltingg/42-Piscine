/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:44:11 by sting             #+#    #+#             */
/*   Updated: 2023/09/28 08:28:03 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
    printf ("%i", ft_recursive_factorial(1));
}
*/
