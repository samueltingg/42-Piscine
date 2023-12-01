/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:02:44 by sting             #+#    #+#             */
/*   Updated: 2023/09/19 15:52:40 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int	num1 = 6;
	int	num2 = 2;
	int	result_div;
	int	result_mod;

	ft_div_mod(num1, num2, &result_div, &result_mod);
	printf ("%d", result_div);
	printf ("%d", result_mod);	
}
*/
