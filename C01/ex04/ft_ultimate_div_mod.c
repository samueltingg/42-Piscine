/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:21:09 by sting             #+#    #+#             */
/*   Updated: 2023/09/19 16:27:35 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;
	
	num1 = 6;
	num2 = 2;

	ft_ultimate_div_mod(&num1, &num2);
	printf ("%d", num1);
	printf ("%d", num2);
}
*/
