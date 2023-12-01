/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:44:08 by sting             #+#    #+#             */
/*   Updated: 2023/09/21 07:53:21 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	int	result1;
	int	result2;
	int result3;

	string1 = "Waaasdfrld";
	string2 = "123wer4";
	string3 = "";
	result1= ft_str_is_alpha(string1);
	result2 = ft_str_is_alpha(string2);
	result3 = ft_str_is_alpha(string3);

	printf ("%d\n", result1);
	printf ("%d\n", result2);
	printf ("%d", result3);
	return (0);
}
*/
